class Exceptionpropagation{
    public static void main(String[] args){
        String[] s = { "123","abc", null};  
        for (int i = 0; i <=s.length; i++){
            
            try{
                int a = s.length;
                
                try{
                    if(s[i]==null)
                    {System.out.println(s[i]);
                    throw(null);}
                    try{
                        a = Integer.parseInt(s[i]); 
                        System.out.println(s[i]);
                        
                    }
                     
                     catch (NumberFormatException e){
                         
                        System.out.println("NumberFormatException caught here ");
                    }
                }
               catch(NullPointerException ex){
                    System.out.println("NullPointerException caught here");
                }
                
                     }
                
               
             catch (ArrayIndexOutOfBoundsException aie){
                    System.out.println("ArrayIndexOutOfBoundsException caught here");
             }
        }
    
}
}