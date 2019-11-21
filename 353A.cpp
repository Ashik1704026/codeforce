#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long sumleft=0,sumright=0;
    cin>>n;
    pair<int,int>ar[n];
    for(int i=0;i<n;i++) {
        cin>>ar[i].first>>ar[i].second;
        sumleft+=ar[i].first;
        sumright+=ar[i].second;
    }
    if(sumright%2==0 && sumleft%2==0){
        cout<<"0\n";
        return 0;
    }
    if(sumleft%2!=0 && sumright%2!=0){
        for(int i=0;i<n;i++){
            if(ar[i].first%2==0 && ar[i].second%2!=0){
                cout<<"1\n";
                return 0;
            }
            else if(ar[i].first%2!=0 && ar[i].second%2==0){
                cout<<"1\n";
                return 0;
            }
        }
    }
    cout<<"-1\n";
    return 0;
}



private void regisActionPerformed(java.awt.event.ActionEvent evt) {                                      
        // TODO add your handling code here:
        try{
            try ( //Class.forName("com.mysql.jdbc.Driber");
                    Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/refuck", "root", "password")) {
                String sql="insert into passenger values(?,?,?,?,?,?,?,?,?,?)";
                PreparedStatement rstmt=conn.prepareStatement(sql);
                rstmt.setInt(1,12);
                rstmt.setString(2,name.getText());
                rstmt.setString(3,address.getText());
                rstmt.setString(4,pass.getText());
                rstmt.setString(5,repass.getText());
                rstmt.setString(6,birth.getText());
                rstmt.setString(7,add.getText());
                rstmt.setInt(8,Integer.parseInt(post1.getText()));
                rstmt.setInt(9,Integer.parseInt(nid.getText()));
                rstmt.setInt(10,Integer.parseInt(mobile.getText()));
                rstmt.executeUpdate();
                JOptionPane.showMessageDialog(null,"insertion successful");
            }
        }
        catch(Exception e){
            JOptionPane.showMessageDialog(null,e);
        }
    }