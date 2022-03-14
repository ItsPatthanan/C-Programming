#include <stdio.h>
typedef struct {
    int hour, minute, second ;
} timeData ;
timeData GetDuration( timeData t1, timeData t2 ) {
    timeData Output ;
    Output.hour     = t2.hour - t1.hour ;
    Output.minute   = t2.minute - t1.minute ;
    Output.second   = t2.second - t1.second ;
    return Output ;
}//end function
void ShowTime( timeData t ) {
    printf( "The time is %02d:%02d:%02d",
        t.hour, t.minute, t.second
    ) ;
}//end function
void main( void ) {
    timeData startTime, stopTime, Duration ;
    
    startTime.hour = 10 ; startTime.minute = 5 ; startTime.second = 33 ;
    printf( "\nStart time : " ) ;
    ShowTime( startTime ) ;
    
    stopTime.hour = 21 ; stopTime.minute = 55 ; stopTime.second = 41 ;
    printf( "\nStop time : " ) ;
    ShowTime( stopTime ) ;
    
    Duration = GetDuration( startTime, stopTime ) ;
    printf( "\nDuration : " ) ;
    ShowTime( Duration ) ;
    
}//end function