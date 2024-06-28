#iostream

int main(){

  
     int day;
     char choice='y';
     
     while(choice=='y' || choice=='Y'){
     std::cout<<"Enter a number between 1-7 and I will tell you two subjects you have on that day:\n";

     std::cin>>day;

     switch(day){
       case 1:
       std::cout<<"You have English and Setswana";
       break;
        
       case 2:
       std::cout<<"You have maths and cs"
;
       break;

       case 3:
       std::cout<<"You have chemistry and physics";
       break;

       case 4:
       std::cout<<"You have English and bio";
       break;

       case 5:
       std::cout<<"You have Geo and GC";
       break;

       case 6:
       std::cout<<"You have chem and maths";
       break;

          default:
          std::cout<<"TYpe a number between 1 and 7";
     }
      std::cout<<"\nDo you want to continue? (y/n): ";
     std::cin>>choice;  
          
     }       
     
     return 0;
}