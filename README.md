# AppVideos
Il progetto nel complesso ha come obiettivo di creare un'autovettura con l'AI integrata capace di aprirsi riconoscendo il proprietario.
L'applicazione ha come scopo quello di creare dei video che verrano utilizzati per l'allenamento dell'AI.
Nell'applicazione verrà simulato il passaggio del proprietario verso all'autovettura in diverse angolazioni.

# Blueprint
I grafici dei Blueprint implementati:
1. Nel momento in cui viene creato il Widget viene nascosto il pannello delle animazioni,
   viene eseguito i cast per le telecamere, directional light, sky light e SM_SkyLight e imposta
   a quest'ultime il colori per simulare il mattino.
![BP_Widget_EventConstruct](https://github.com/user-attachments/assets/c69eaf18-433e-4383-aa65-d33e850ea8fe)
![BP_Widget_EventConstruct2](https://github.com/user-attachments/assets/e7ea8a98-0b6c-4128-a1b0-37636506f1cf)


1. Con le frecce direzionali Sx e Dx della tastiera è possibile cambiare la visuale della telecamera.
   Vengono definiti due valori, 0 per la variabile IndexRight e 4 per la variabile Indexleft.
   IndexRight viene incrementata invece IndexLeft viene decrementata. In base al valore viene cambiata la visuale della telecamera. 
![BP_Widget_Left](https://github.com/user-attachments/assets/2b2ede9e-20d3-4850-9628-0460d0875045)
![BP_Widget_Right](https://github.com/user-attachments/assets/a8168176-17e3-41ce-9fdd-5bcf5ef5d240)

3. Il bottone Exit per la chiusura dell'applicazione
![BP_Widget_ButtonExit](https://github.com/user-attachments/assets/29ddca9c-b660-4c99-bff3-1e77e63754c9)

4. Il bottone Conferma che nasconde il pannello dei metahuman e apre quello per la scelta delle animazioni,
   dell'ambiente e il momento della giornata.
![BP_Widget_ButtonConferma](https://github.com/user-attachments/assets/83a7ec20-d72d-43f8-9281-f86773c39a26)

5. Slider che gestisce il momento della giornata, Mattino->Giorno->Sera e viceversa.
   Lo slider ha un range di valore che va da 0 a 2. 0->Mattino; 1->Giorno; 2->Sera;
![BP_Widget_SunNightLight](https://github.com/user-attachments/assets/ed18615c-09a6-4f62-a46f-9014b21bacba)




