✨Một vài thứ hay ho về STRING ( hay đối với t.. sẽ cảm thấy nó hay sau khi bội thực mắng ) trong C++ :
  - MẢNG ĐẾM ( rate 70 :> học siêu chắc mảng rồi thì 30 thui ) 
    Nó sẽ như này 

    
😈 Bài toán đếm số lần xuất hiện của 26 ký tự bảng Alphabet :
    int cnt[2000001] <- trong này là max của bài toán
    bool GetOrder( char x ) 
    {
      return x - (int)'a' ; // Trả về số thứ tự của bọn nó trong bảng Alpha: a = 0 ; b = 1 ; c = 3 ..
    }
    int main() 
    {   
      string str ; cin >> str ; 
      for( int i = 0 ; i< str.size(); i++ )
      {
        cnt[GetOrder[str[i]]]++ ; // GetOrder là để +1 cho những phần tử xuất hiện trong mảng ; cnt là để nhét số lượng vào :)?
      }
      for( int i = 0 ; i< 26 ; i++) // Quét và đếm từng chữ cái của bảng Alpha 
      {
        cout << cnt[i] << " " ; 
      }
    }

    INP : abacdz
    OUTP : 2 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 
    😴

- thuật toán MIN, MAX.. ( kbt diễn tả saoo ) :
  Tóm lại là nó như này 
  😈 Bài toán so sánh xâu :
      bool Compare( string a , string b ) 
      {
      // stop tạm ở đây =))
      }

  
    
  
