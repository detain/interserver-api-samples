@isTest
private class OASFormValuesTest {
    @isTest
    private static void equalsSameInstance() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = formValues1;
        OASFormValues formValues3 = new OASFormValues();
        OASFormValues formValues4 = formValues3;

        System.assert(formValues1.equals(formValues2));
        System.assert(formValues2.equals(formValues1));
        System.assert(formValues1.equals(formValues1));
        System.assert(formValues3.equals(formValues4));
        System.assert(formValues4.equals(formValues3));
        System.assert(formValues3.equals(formValues3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = OASFormValues.getExample();
        OASFormValues formValues3 = new OASFormValues();
        OASFormValues formValues4 = new OASFormValues();

        System.assert(formValues1.equals(formValues2));
        System.assert(formValues2.equals(formValues1));
        System.assert(formValues3.equals(formValues4));
        System.assert(formValues4.equals(formValues3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = new OASFormValues();

        System.assertEquals(false, formValues1.equals('foo'));
        System.assertEquals(false, formValues2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = new OASFormValues();
        OASFormValues formValues3;

        System.assertEquals(false, formValues1.equals(formValues3));
        System.assertEquals(false, formValues2.equals(formValues3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = new OASFormValues();

        System.assertEquals(formValues1.hashCode(), formValues1.hashCode());
        System.assertEquals(formValues2.hashCode(), formValues2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASFormValues formValues1 = OASFormValues.getExample();
        OASFormValues formValues2 = OASFormValues.getExample();
        OASFormValues formValues3 = new OASFormValues();
        OASFormValues formValues4 = new OASFormValues();

        System.assert(formValues1.equals(formValues2));
        System.assert(formValues3.equals(formValues4));
        System.assertEquals(formValues1.hashCode(), formValues2.hashCode());
        System.assertEquals(formValues3.hashCode(), formValues4.hashCode());
    }
}
