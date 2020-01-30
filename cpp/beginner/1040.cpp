#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double a, b, c, d, media, exame, mediaexame;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(1);

    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    cout << "Media: " << media << endl;

    if(media >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (5 <= media && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        mediaexame = (exame + media) / 2;
        if (mediaexame >= 5)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << mediaexame << endl;
        }
        else if (mediaexame < 5)
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << mediaexame << endl;
        }
    }
    return 0;
}
