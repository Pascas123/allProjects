//Memo Clear

Memo1->Clear();         //Gesamtes Memo wird gelöscht
Memo1->Lines->Add("NEU"); 
Memo1->Lines->Delete(Memo1->Lines->Count); Zeile nach "NEU" wird gelöscht
Memo1->Lines->Add(a);


void __fastcall TForm1::Button1Click(TObject *Sender)
{
if((Timer1->Enabled==false)&&(started==false)){
Timer1->Enabled=true;
started=true;
}

Memo1->Clear();
Memo1->Lines->Add("NEU");
Memo1->Lines->Delete(Memo1->Lines->Count);
Memo1->Lines->Add(a);
getData(a, index);
a++;
index++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
if((Timer1->Enabled==true)&&(started==true)){
Timer1->Enabled=false;
started==false;
getData(a, index);
}
index=0;
Memo1->Clear();
for(index=0;index<=10;index++){
Memo1->Lines->Add(incoming[index].dataIn);
}
}