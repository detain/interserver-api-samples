@isTest
private class OASHardDriveTest {
    @isTest
    private static void equalsSameInstance() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = hardDrive1;
        OASHardDrive hardDrive3 = new OASHardDrive();
        OASHardDrive hardDrive4 = hardDrive3;

        System.assert(hardDrive1.equals(hardDrive2));
        System.assert(hardDrive2.equals(hardDrive1));
        System.assert(hardDrive1.equals(hardDrive1));
        System.assert(hardDrive3.equals(hardDrive4));
        System.assert(hardDrive4.equals(hardDrive3));
        System.assert(hardDrive3.equals(hardDrive3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = OASHardDrive.getExample();
        OASHardDrive hardDrive3 = new OASHardDrive();
        OASHardDrive hardDrive4 = new OASHardDrive();

        System.assert(hardDrive1.equals(hardDrive2));
        System.assert(hardDrive2.equals(hardDrive1));
        System.assert(hardDrive3.equals(hardDrive4));
        System.assert(hardDrive4.equals(hardDrive3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = new OASHardDrive();

        System.assertEquals(false, hardDrive1.equals('foo'));
        System.assertEquals(false, hardDrive2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = new OASHardDrive();
        OASHardDrive hardDrive3;

        System.assertEquals(false, hardDrive1.equals(hardDrive3));
        System.assertEquals(false, hardDrive2.equals(hardDrive3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = new OASHardDrive();

        System.assertEquals(hardDrive1.hashCode(), hardDrive1.hashCode());
        System.assertEquals(hardDrive2.hashCode(), hardDrive2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHardDrive hardDrive1 = OASHardDrive.getExample();
        OASHardDrive hardDrive2 = OASHardDrive.getExample();
        OASHardDrive hardDrive3 = new OASHardDrive();
        OASHardDrive hardDrive4 = new OASHardDrive();

        System.assert(hardDrive1.equals(hardDrive2));
        System.assert(hardDrive3.equals(hardDrive4));
        System.assertEquals(hardDrive1.hashCode(), hardDrive2.hashCode());
        System.assertEquals(hardDrive3.hashCode(), hardDrive4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHardDrive hardDrive = new OASHardDrive();
        Map<String, String> x-property-mappings = hardDrive.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('driveType', x-property-mappings.get('drive_type'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
