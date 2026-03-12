@isTest
private class OASFieldLabelTest {
    @isTest
    private static void equalsSameInstance() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = fieldLabel1;
        OASFieldLabel fieldLabel3 = new OASFieldLabel();
        OASFieldLabel fieldLabel4 = fieldLabel3;

        System.assert(fieldLabel1.equals(fieldLabel2));
        System.assert(fieldLabel2.equals(fieldLabel1));
        System.assert(fieldLabel1.equals(fieldLabel1));
        System.assert(fieldLabel3.equals(fieldLabel4));
        System.assert(fieldLabel4.equals(fieldLabel3));
        System.assert(fieldLabel3.equals(fieldLabel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel3 = new OASFieldLabel();
        OASFieldLabel fieldLabel4 = new OASFieldLabel();

        System.assert(fieldLabel1.equals(fieldLabel2));
        System.assert(fieldLabel2.equals(fieldLabel1));
        System.assert(fieldLabel3.equals(fieldLabel4));
        System.assert(fieldLabel4.equals(fieldLabel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = new OASFieldLabel();

        System.assertEquals(false, fieldLabel1.equals('foo'));
        System.assertEquals(false, fieldLabel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = new OASFieldLabel();
        OASFieldLabel fieldLabel3;

        System.assertEquals(false, fieldLabel1.equals(fieldLabel3));
        System.assertEquals(false, fieldLabel2.equals(fieldLabel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = new OASFieldLabel();

        System.assertEquals(fieldLabel1.hashCode(), fieldLabel1.hashCode());
        System.assertEquals(fieldLabel2.hashCode(), fieldLabel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASFieldLabel fieldLabel1 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel2 = OASFieldLabel.getExample();
        OASFieldLabel fieldLabel3 = new OASFieldLabel();
        OASFieldLabel fieldLabel4 = new OASFieldLabel();

        System.assert(fieldLabel1.equals(fieldLabel2));
        System.assert(fieldLabel3.equals(fieldLabel4));
        System.assertEquals(fieldLabel1.hashCode(), fieldLabel2.hashCode());
        System.assertEquals(fieldLabel3.hashCode(), fieldLabel4.hashCode());
    }
}
