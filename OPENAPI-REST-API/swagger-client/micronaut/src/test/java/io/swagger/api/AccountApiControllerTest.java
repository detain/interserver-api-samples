package io.swagger.api;

import io.swagger.model.Account2faBody1;
import io.swagger.model.AccountFeatures;
import io.swagger.model.AccountInfo;
import io.swagger.model.AccountInfoPost;
import io.swagger.model.AccountSshKey;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse200;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpLimitRange;
import io.swagger.model.PasswordRequest;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class AccountApiControllerTest {

    @Inject
    private AccountApi api;

    @Test
    void addAccountCreditCardFormTest() {
        String name = null;
        String address = null;
        String city = null;
        String state = null;
        String country = null;
        String zip = null;
        String cc = null;
        String ccExp = null;
        String ccCcv2 = null;
        try {
            //TODO: api.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void changeAccountUsernameTest() {
        try {
            //TODO: api.changeAccountUsername().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteAccountCreditCardTest() {
        String id = null;
        try {
            //TODO: api.deleteAccountCreditCard(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteAccountOauthNameTest() {
        String name = null;
        try {
            //TODO: api.deleteAccountOauthName(name).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteAccountTfaTest() {
        try {
            //TODO: api.deleteAccountTfa().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteIpLimitTest() {
        try {
            //TODO: api.deleteIpLimit().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getAccountInfoTest() {
        try {
            //TODO: api.getAccountInfo().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getAccountTfaSetupTest() {
        try {
            //TODO: api.getAccountTfaSetup().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getCountriesTest() {
        String fetchBy = null;
        try {
            //TODO: api.getCountries(fetchBy).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getTimezonesTest() {
        try {
            //TODO: api.getTimezones().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void logoutAccountOauthTest() {
        String name = null;
        try {
            //TODO: api.logoutAccountOauth(name).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountApiKeyTest() {
        try {
            //TODO: api.updateAccountApiKey().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountCreditCardTest() {
        Integer id = null;
        try {
            //TODO: api.updateAccountCreditCard(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountFeaturesFormTest() {
        Integer disableReset = null;
        Integer disableReinstall = null;
        try {
            //TODO: api.updateAccountFeatures(disableReset, disableReinstall).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountInfoFormTest() {
        String name = null;
        String company = null;
        String address = null;
        String address2 = null;
        String city = null;
        String state = null;
        String zip = null;
        String country = null;
        String phone = null;
        String locale = null;
        String emailInvoices = null;
        String emailAbuse = null;
        Boolean disableReset = null;
        Boolean disableReinstall = null;
        Boolean disableServerNotifications = null;
        Boolean disableEmailNotifications = null;
        String gstin = null;
        try {
            //TODO: api.updateAccountInfo(name, company, address, address2, city, state, zip, country, phone, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountIpLimitsFormTest() {
        String start = null;
        String end = null;
        try {
            //TODO: api.updateAccountIpLimits(start, end).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountPasswordFormTest() {
        String password = null;
        try {
            //TODO: api.updateAccountPassword(password).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountSshKeyFormTest() {
        String sshKey = null;
        try {
            //TODO: api.updateAccountSshKey(sshKey).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateAccountTfaFormTest() {
        String _2faGoogleCode = null;
        try {
            //TODO: api.updateAccountTfa(_2faGoogleCode).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
