<?php
    echo "Enter Number Of Elves";
    $N = readline();

    if(1<=$N && $N <=1000 ){
        for($loop = 0; $loop < $N; $loop++){
            echo "Enter ElveNmae group_name workHour";
            $input[$loop] = readline(); 
        }
        
        $aHour = 0;
        $bHour =0;
        $dHour = 0;
        $mHour = 0;

        foreach($input as $index => $in){
            $blocks = explode(' ', $input[$index]);
            
            if($blocks[1] == 'bonecos') $bHour += $blocks[2];
            elseif($blocks[1] == 'arquitetos') $aHour += $blocks[2];
            elseif($blocks[1] == 'musicos') $mHour += $blocks[2];
            elseif($blocks[1] == 'desenhistas') $dHour += $blocks[2];
        }
        $a = (int)$bHour = $bHour / 8;
        $b = (int)$aHour = $aHour / 4;
        $c = (int)$mHour = $mHour / 6;
        $d = (int)$dHour = $dHour / 12;

        $P = $a+$b+$c+$d;
        echo "$P\n";
        
    }
    
    
?>