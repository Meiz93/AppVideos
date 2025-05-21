# AppVideos
Il progetto nel complesso ha come obiettivo di creare un'autovettura con l'AI integrata capace di aprirsi riconoscendo il proprietario.
Per il training di questa AI bisogna avere un dataset di video, questo è lo scopo dell'applicazione ovvero creare video di persone che camminano
verso l'autovettura in diverse direzioni, in modo da allenare l'AI a riconoscere il proprietario.

# C++
1. Metahuman Manager (Guardare file MetahumanManager.h e MetahumanManager.cpp)
   Classe usata come "contenitore" per i Metahuman che vengono raggrupati in un array di Character, dalla quale deriva la classe Blueprint
   BP_MetahumanManager che è stata istanziata nella scena.
   
3. CPPMenuTekke (Guardare fiel CPPMenuTekke.h e CPPMenuTekke.cpp)
   Classe che implementa la logica dell'applicazione dalla quale deriva la classe Blueprint del Widget BPWidegt_CPPMenuTekken.
   L'utente sceglie inizialemente un Metahuman da utilizzare, sceglie l'ambiente urbano o residenziale, il momento della giornata (Mattino, Giorno, Sera)
   e la visuale della telecamera. In fine scegliendo l'animazione il Metahuman inizia a camminare verso l'autovettura.  

# Blueprint
Blueprint Graph:
1. Nel momento in cui viene creato il Widget viene nascosto il pannello delle animazioni,
   viene eseguito i cast per le telecamere, directional light, sky light e SM_SkyLight e imposta
   a quest'ultime il colori per simulare il mattino.
![BP_Widget_EventConstruct](https://github.com/user-attachments/assets/c69eaf18-433e-4383-aa65-d33e850ea8fe)
![BP_Widget_EventConstruct2](https://github.com/user-attachments/assets/e7ea8a98-0b6c-4128-a1b0-37636506f1cf)

1. Con le frecce direzionali Sx e Dx della tastiera è possibile cambiare la visuale della telecamera.
   Vengono definiti due valori, 0 per la variabile IndexRight e 4 per la variabile Indexleft.
   IndexRight viene incrementata invece IndexLeft viene decrementata. Con l'input vengono cambiati i valori delle variabili
   consentendo di muoversi verso destra e verso sinistra.
![BP_Widget_Left](https://github.com/user-attachments/assets/2b2ede9e-20d3-4850-9628-0460d0875045)
![BP_Widget_Right](https://github.com/user-attachments/assets/a8168176-17e3-41ce-9fdd-5bcf5ef5d240)

3. Il bottone Exit per la chiusura dell'applicazione

   ![BP_Widget_ButtonExit](https://github.com/user-attachments/assets/29ddca9c-b660-4c99-bff3-1e77e63754c9)

5. Il bottone Conferma che nasconde il pannello dei metahuman e apre quello per la scelta delle animazioni,
   dell'ambiente e il momento della giornata.
![BP_Widget_ButtonConferma](https://github.com/user-attachments/assets/83a7ec20-d72d-43f8-9281-f86773c39a26)

6. Slider che gestisce il momento della giornata, Mattino->Giorno->Sera e viceversa.
   Lo slider ha un range di valore che va da 0 a 2. 0->Mattino; 1->Giorno; 2->Sera;
![BP_Widget_SunNightLight](https://github.com/user-attachments/assets/ed18615c-09a6-4f62-a46f-9014b21bacba)




