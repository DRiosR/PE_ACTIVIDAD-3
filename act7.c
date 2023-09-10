// RiosRodriguezDaniel 372800
// 5-sep-23
/*
Función en C que pida el mes y día de nacimiento de una persona y el programa le despliega el signo del zodiaco que le corresponde y su correspondiente horoscopo del Dia.
*/
// R.R.D_act3_7_932
#include <stdio.h>

int main()
{
    int mes, dia;

    printf("Ingresa el dia de tu nacimiento\n ");
    scanf("%d", &dia);

    printf("Ingresa el mes de tu nacimiento\n ");
    scanf("%d", &mes);

    printf("Tu signo del zodiaco es: ");
    if (mes <= 7)
    {
        if (mes <= 3)
        {
            if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
            {
                printf("Capricornio\n");
                printf("Capricornio, es el momento de que cierres un circulo que tienes todavia pendiente en el terreno sentimental. Si hoy, por casualidad o no, te encuentras con un amor de tu pasado, es un buen momento para dedicarle un rato y poner en claro todas las cosas que quedaron por decir y que te han dado vueltas por la cabeza a diario desde entonces. Ahora que ha pasado el tiempo los dos sereis mas objetivos. Es probable que esta persona necesite algun favor de ti. Si esta en tu mano, ayudale, sin rencor, Capricornio, pero despues de esto, cierra definitivamente la puerta. Alguien sigue tus pasos a diario desde hace un tiempo. Si hoy decide manifestarse y te invita a tomar algo, no rechaces la cita. Te alegraras de haber acudido.\n");
            }
            if ((dia >= 20 && mes == 1) || (dia <= 16 && mes == 2))
            {
                printf("Acuario\n");
                printf("Hoy tendras que afrontar un trabajo importante y te lo pediran con bastantes prisas, Acuario. Puedes hacerlo aunque no sea esta tu forma de trabajar a diario  porque eres muy perfeccionista y siempre te quedas con el resquemor de que no lo has podido repasar o temes haber cometido algun error por las prisas. Evita que la ansiedad por ello se apodere hoy de ti, o empezaras la semana con mal pie. En el amor, hoy puedes verte tentada  por una persona que te ha cautivado, enamoradiza Acuario. Si tienes una relacion, procura evitar esa tentacion. El respeto por tu pareja es esencial. Piensa en como te sentirias tu en el caso contrario. Ademas, estas en una etapa estable, puede que algo aburrida o rutinaria a diario, pero esto no lo justifica. Si decides seguir tu impulso, atente a las consecuencias. Consulta tu horoscopo semanal y descubre como seran tus dias.\n");
            }
            if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3))
            {
                printf("picis\n");
                printf("Has adquirido algunos compromisos, de trabajo  y personales, y hoy ya va siendo ya hora de que los cumplas, Piscis. Eres muy dada a meterte a diario en camisa de once varas y seguramente ahora no tienes el menor deseo de hacer lo que dijiste. No te queda otra si no quieres quedar fatal. Para que te resulte facil prepara un plan de accion y divide lo en partes, prioriza lo mas importante y poco a poco lo conseguiras. En el ambito sentimental, Piscis, si estas pasando una pequena crisis de pareja y hoy te estas planteando romper la relacion, los astros te aconsejan que le des a tu chico otra oportunidad. Estas cosas son normales entre dos personas que se aman. Y reconoce que tu deberias poner mas de tu parte a diario para que todo marche como una seda.\n");
            }
        }
        else
        {
            if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4))
            {
                printf("Aries\n");
                printf("no eres consciente, aries, de que cuando haces cosas que quieres ocultar, acabas contando peliculas que nadie se cree. hoy se puede presentar una de estas ocasiones porque puede contactar contigo una persona que se relaciono a diario contigo en el pasado y que te ha llamado para quedar. no se trata de reanudar la relacion, simplemente se ha acordado de ti y quiere saber como estas. si hoy piensas acudir, mas vale que le cuentes la verdad a la persona que ahora esta a tu lado, aries. no vayas diciendo que has de ir al medico o que te has encontrado a un cliente pelma. a diario no mientas, no tergiverses y no manipules o al final nadie te creera y mucho menos te tomaran en serio. ademas, tu pareja puede enfadarse un monton y razones tendria para ello.\n");
            }
            if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
            {
                printf("Tauro\n");
                printf("El fin de semana te ha sabido a poco y has vuelto al trabajo con poca energía y menos creatividad, Tauro. Quizá hoy necesitas todavía más descanso, no de cama o sofá, sino de relajación y diversión. Es la mente la que tienes sobrecargada a diario, por eso aunque sea lunes busca tiempo de donde sea para pasear, hacer ejercicio, salir y observar la gente que pasa, o ir de tiendas, no a comprar sino a ponerte al día. También es buen momento para explorar por internet temas de tu interés o apuntarte a un curso, un taller online, a cualquier otra actividad que te permita a diario descubrir nuevas facetas de tu profesión y actualizarte, emprendedora Tauro. Busca el apoyo de tu chico y comparte hoy con él todo el tiempo que puedas de esta jornada tan especial.\n");
            }
            if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
            {
                printf("Geminis\n");
                printf("La primera hora del día de hoy, Geminis, te hará entrar ganas de volver a casa y meterte en la cama. Te espera un día intenso, con muchas cosas para hacer y bastante complicadas. Pero de este esfuerzo a diario saldrá la inspiración para mejorar muchos aspectos de tu trabajoy también para hacerlo mucho más rápido y perfecto. Si te enteras por casualidad de que un amigo o amiga está en problemas, hazle una llamada e interésate por lo que le ocurre. Hoy por ti mañana por mí. Es alguien que recordará a diario que le has echado una mano. En el ámbito sentimental, si en estos momentos estás sola y tienes un ideal fijado en tu mente, romantica Geminis, esa persona podría estar muy cerca y quizá coincidas con ella hoy mismo. Prepárate para amar de nuevo. Es normal tener miedo pero mira tu horoscopo del amor y deja los temores a un lado.\n");
            }
        }
    }
    else
    {
        if (mes <= 9)
        {
            if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7))
            {
                printf("Cancer\n");
                printf("Estas en un momento de egocentrismo, Cancer. Pasas de muchas de las cosas que ocurren a tu alrededor a diario o de lo que te cuentan las personas que te rodean. Te estas centrando demasiado en tus deseos y tus opiniones, pasando del resto olimpicamente. Hoy deberias bajar de tu podio y prestar oidos  lo que te dice una persona muy experta y muy inteligente que tiene o tuvo un trabajo similar al tuyo. Si aprecias sus consejos y los pones en practica hoy mismo, te ayudaran mucho a progresar profesionalmente, luchadora Cancer. A nivel sentimental, este ataque de ego que te ha dado ultimamente a diario ha hecho surgir ciertas dificultades. Es probable que esta “fiebre” no te dure mucho pero vigila que tu ser amado no se harte de que le tengas en segunda fila.\n");
            }
            if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
            {
                printf("Leo\n");
                printf("Hoy tendras un dia relajado, Leo. Tu animo esta ahora mas sereno y esto es muy positivo porque te estas concediendo a diario mas tiempo para reflexionar. Esta es una buena forma de cometer menos errores y tambien de reaccionar con mayor serenidad y acierto ante las situaciones negativas que nos llegan en la vida. Buen dia para organizarte el presupuesto y para que te des cuenta de que te conviene no despilfarrary de que te vendria muy bien ahorrar un poco a diario. Te has propuesto un objetivo y podrias alcanzarlo antes de lo que te piensas si no miraras hacia el lado equivocado. Presta hoy mas atencion a las senales que te da la vida, despistada Leo. Tu lunes puede terminar de una forma genial si sales con tus amigos y quizas alguna persona que todavia no conoces.\n");
            }
            if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
            {
                printf("Virgo\n");
                printf("Hoy tendras un dia relajado, Leo. Tu animo esta ahora mas sereno y esto es muy positivo porque te estas concediendo a diario mas tiempo para reflexionar. Esta es una buena forma de cometer menos errores y tambien de reaccionar con mayor serenidad y acierto ante las situaciones negativas que nos llegan en la vida. Buen dia para organizarte el presupuesto y para que te des cuenta de que te conviene no despilfarrary de que te vendria muy bien ahorrar un poco a diario. Te has propuesto un objetivo y podrias alcanzarlo antes de lo que te piensas si no miraras hacia el lado equivocado. Presta hoy mas atencion a las senales que te da la vida, despistada Leo. Tu lunes puede terminar de una forma genial si sales con tus amigos y quizas alguna persona que todavia no conoces.\n");
            }
        }
        else
        {
            if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
            {
                printf("Libra\n");
                printf("Tienes muchas cosas que hacer hoy, ocupadisima Libra, por eso tienes que hacer acopio de energia tomando un buen desayuno que te permita afrontar la jornada con el mejor animo. Si te sientes un poco perezosa porque es lunes, aprovecha para caminar y que te de el aire. Ve andando al trabajo o por lo menos parte del trayecto. Esto te ayudara a diario a despejarte y a que la sangre circule mejor. A la salida, contacta con las personas queridas que no ves a diario, aunque sea via telefonica. Reserva una parte de tu tiempo para esas personas que te aprecian. El amor hoy necesita que le prestes mucha atencion, Libra. Si has faltado algun dia a la cita porque otros temas te han ocupado demasiado tiempo, prometele que esto no volvera a suceder. Tu pareja es tambien muy importante.\n");
            }
            if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
            {
                printf("escorpion\n");
                printf("Sabes que siempre te acaba llegando ayuda de cualquier tipo cuando mas la necesitas, Escorpio. Tal vez en el ultimo minuto, pero el Universo no ha dejado nunca que te hundas. Asi que no estes hoy tan preocupada por ese tema laboral que te aqueja a diario. Se arreglara. Y si eres de las Escorpio que esta inquieta porque necesita encontrar empleo como sea, sigue activa para conseguirlo pero no tengas duda de que pronto va a llegar a ti una buena oportunidad, quizas hoy mismo. Mientras, intenta vivir a diario en armonia y con serenidad, dos valores que te ayudaran  a que todo te parezca mucho mas facil. En el terreno sentimental, no confundas afecto, carino, o incluso admiracion, con el amor que has de sentir con quien compartas tu vida. No te conformes con una parte pudiendo tenerlo todo.\n");
            }
            if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
            {
                printf("Sagitario\n");
                printf("Esta sensacion que tienes, Sagitario, de que a diario te dan mas trabajo que a los demas, o que las cosas que te encargan son mas dificultosas, es solo una percepcion tuya. Hoy piensa solo en asumir lo que te han encomendado y hacerlo lo mejor posible. Deja de fijarte en lo que tienen que hacer los demas y en si lo hacen bien o no. Hoy es un buen dia para hacer buenos propositos y empezar a cumplirlos. Por ejemplo, esos cigarrillos que caen cada dia, las cervecitas, o la comida basura de la que sueles abusar. Si quieres seguir en otono con una buena silueta y una piel resplandeciente, ahora estas a tiempo de empezar este plan de purificacion organica, Sagitario. Recurre a diario a frutas, verduras, legumbres, zumos e infusiones. Dentro de algunas semanas te alegraras mucho de ello.\n");
            }
        }
        return 0;
    }
}
