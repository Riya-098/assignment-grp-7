
#include <stdio.h>
#include <math.h>

int main()
{
    int m;
    double angle_deg, angle_rad, slit_um, wavelength;

    printf("=== Light Wavelength Calculator ===\n\n");

    printf("Enter fringe order (m): ");
    scanf("%d", &m);

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle_deg);

    printf("Enter slit distance in micrometers: ");
    scanf("%lf", &slit_um);

    angle_rad = angle_deg * 3.1416 / 180.0;

    slit_um = slit_um * 1000.0;

    wavelength = (slit_um * sin(angle_rad)) / m;

    printf("\nWavelength = %.2f nm\n", wavelength);
    printf("Color of light: ");

    if (wavelength >= 380 && wavelength < 450)
    {
        printf("Violet\n");
    }
    else if (wavelength >= 450 && wavelength < 485)
    {
        printf("Blue\n");
    }
    else if (wavelength >= 485 && wavelength < 500)
    {
        printf("Cyan\n");
    }
    else if (wavelength >= 500 && wavelength < 565)
    {
        printf("Green\n");
    }
    else if (wavelength >= 565 && wavelength < 590)
    {
        printf("Yellow\n");
    }
    else if (wavelength >= 590 && wavelength < 625)
    {
        printf("Orange\n");
    }
    else if (wavelength >= 625 && wavelength <= 750)
    {
        printf("Red\n");
    }
    else
    {
        printf("Out of visible range\n");
    }

    return 0;
}
