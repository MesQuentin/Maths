#include <iostream>
#include <Eigen/Dense>
#include <ctime>


//1°/ Les deux vecteurs doivent être de la même taille

//2°/

double dotProduct(const Eigen::VectorXd &v1, const Eigen::VectorXd &v2) {

    double res = 0.0;

    if(v1.size()!=v2.size()) {
        std::cerr << "Les vecteurs ne vivent pas dans le même univers. Leur amour est impossible" << std::endl;
    }

    else{
        for (int i =0; i<v1.size(); i++) {
            res += v1(i)*v2(i);
        }
    }

    return res;
}

int main() {

    const unsigned int size = 10000;
    Eigen::VectorXd test1 = Eigen::VectorXd::Random(size);
    Eigen::VectorXd test2 = Eigen::VectorXd::Random(size);

    std::cout << "BIENVENNNNUE AU MATCH HOMME VS MACHINE !! QUI SERA REMPORTERA LE COMBAT ?? "<< std::endl;
    std::cout << "A MA GAUCHE, LE RESULTAT DE L'HUMAIN : " << dotProduct(test1, test2) << std::endl;
    std::cout << "ET A MA DROITE, LA CONCLUSION DE LA MACHINE : " << test1.dot(test2) << std ::endl;
    std::cout << "ALORS ? QUI A GAGNE ?" << std::endl;
    std::cout << std::endl;
    std::cout << "LES DEUX CONCURRENTS SONT A EGALITE !!! PLAAAAAAAAAAAAAAAAAAACE A LA SECONDE EPREUVE !!" << std::endl;
    std::cout << "TOUT SE JOUERA AU TEMPS !!" << std::endl;
    std::cout << "FAIS TON TRAVAIL, PITOYABLE HUMAIN !" << std::endl;
    clock_t begin = clock();
    dotProduct(test1, test2);
    clock_t end = clock();
    double tempsCalc = double(end - begin) / CLOCKS_PER_SEC;
    std::cout << "OOOOOOOOH !! " << tempsCalc << " SECONDES ! C'EST PAS ENORME ! QUE VA REPONDRE LA MACHINE ?" << std::endl;
    clock_t begin2 = clock();
    test1.dot(test2);
    clock_t end2 = clock();
    double tempsCalc2 = double(end2 - begin2) / CLOCKS_PER_SEC;
    std::cout << "ET C'EST UNE HUMILIATION !!! SEULEMENT " << tempsCalc2 << " SECONDEEEES !!" << std::endl;
    std::cout << "RENTRE CHEZ TOI VIEIL HOMME ! LE FUTUR EST ROBOTIQUE" << std::endl;
    std::cout << "VICTOIRE ECRASANTE DE LA MACHINE !!" << std::endl;

    return 0;
}

