const samples = require('../samples/AccountApi');
const AccountInfo = require('../models/AccountInfo');
const GenericResponse = require('../models/GenericResponse');
const Home = require('../models/Home');
const SearchAutocompleteResponse = require('../models/SearchAutocompleteResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const getAccountTfaSetup_200_response = require('../models/getAccountTfaSetup_200_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    changeAccountUsername: {
        key: 'changeAccountUsername',
        noun: 'Account',
        display: {
            label: 'Change Account Username',
            description: 'Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/username'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'changeAccountUsername', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    deleteAccountOauthName: {
        key: 'deleteAccountOauthName',
        noun: 'Account',
        display: {
            label: 'Unlink OAuth Account',
            description: 'Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: '',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/oauth/{name}'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteAccountOauthName', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteAccountTfa: {
        key: 'deleteAccountTfa',
        noun: 'Account',
        display: {
            label: 'Disable Two-Factor Authentication',
            description: 'Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/2fa'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteAccountTfa', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteIpLimit: {
        key: 'deleteIpLimit',
        noun: 'Account',
        display: {
            label: 'Remove IP Access Restriction',
            description: 'Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/iplimits'),
                    method: 'PATCH',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteIpLimit', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    getAccountInfo: {
        key: 'getAccountInfo',
        noun: 'Account',
        display: {
            label: 'Retrieve Account Details',
            description: 'Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...AccountInfo.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAccountInfo', response.json);
                    return results;
                })
            },
            sample: samples['AccountInfoSample']
        }
    },
    getAccountTfaSetup: {
        key: 'getAccountTfaSetup',
        noun: 'Account',
        display: {
            label: 'Get Two-Factor Setup Data',
            description: 'Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...getAccountTfaSetup_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/2fa'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAccountTfaSetup', response.json);
                    return results;
                })
            },
            sample: samples['getAccountTfaSetup_200_responseSample']
        }
    },
    getHome: {
        key: 'getHome',
        noun: 'Account',
        display: {
            label: 'Get Home Data',
            description: 'Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...Home.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/home'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getHome', response.json);
                    return results;
                })
            },
            sample: samples['HomeSample']
        }
    },
    getSearch: {
        key: 'getSearch',
        noun: 'Account',
        display: {
            label: 'Search Autocomplete',
            description: 'Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...SearchAutocompleteResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/search'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getSearch', response.json);
                    return results;
                })
            },
            sample: samples['SearchAutocompleteResponseSample']
        }
    },
    logout: {
        key: 'logout',
        noun: 'Account',
        display: {
            label: 'Log Out',
            description: 'Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/logout'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'logout', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    logoutAccountOauth: {
        key: 'logoutAccountOauth',
        noun: 'Account',
        display: {
            label: 'Logout of OAuth',
            description: 'Logs out of the specified OAuth provider session.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: '',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/oauth/{name}/logout'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'logoutAccountOauth', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateAccountApiKey: {
        key: 'updateAccountApiKey',
        noun: 'Account',
        display: {
            label: 'Generate New API Key',
            description: 'Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/apikey'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountApiKey', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateAccountFeatures: {
        key: 'updateAccountFeatures',
        noun: 'Account',
        display: {
            label: 'Update Account Feature Flags',
            description: 'Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'disable_reset',
                    label: '',
                    type: 'integer',
                },
                {
                    key: 'disable_reinstall',
                    label: '',
                    type: 'integer',
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('disable_reset', bundle.inputData?.['disable_reset'])
                formData.append('disable_reinstall', bundle.inputData?.['disable_reinstall'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/features'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountFeatures', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateAccountInfo: {
        key: 'updateAccountInfo',
        noun: 'Account',
        display: {
            label: 'Update Account Information',
            description: 'Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: 'Your name.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'address',
                    label: 'Your address.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'city',
                    label: 'Your city.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'state',
                    label: 'Your state.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'zip',
                    label: 'Your ZIP code.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'country',
                    label: 'Your country.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'phone',
                    label: 'Your phone number.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'company',
                    label: 'Your company name.',
                    type: 'string',
                },
                {
                    key: 'address2',
                    label: 'Additional address information.',
                    type: 'string',
                },
                {
                    key: 'locale',
                    label: 'Your preferred locale.',
                    type: 'string',
                },
                {
                    key: 'email_invoices',
                    label: 'Your email for invoice notifications.',
                    type: 'string',
                },
                {
                    key: 'email_abuse',
                    label: 'Your email for abuse notifications.',
                    type: 'string',
                },
                {
                    key: 'disable_reset',
                    label: 'Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.',
                    type: 'boolean',
                },
                {
                    key: 'disable_reinstall',
                    label: 'Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.',
                    type: 'boolean',
                },
                {
                    key: 'disable_server_notifications',
                    label: 'Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.',
                    type: 'boolean',
                },
                {
                    key: 'disable_email_notifications',
                    label: 'Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.',
                    type: 'boolean',
                },
                {
                    key: 'gstin',
                    label: 'Your GST identification number (if applicable).',
                    type: 'string',
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('name', bundle.inputData?.['name'])
                formData.append('address', bundle.inputData?.['address'])
                formData.append('city', bundle.inputData?.['city'])
                formData.append('state', bundle.inputData?.['state'])
                formData.append('zip', bundle.inputData?.['zip'])
                formData.append('country', bundle.inputData?.['country'])
                formData.append('phone', bundle.inputData?.['phone'])
                formData.append('company', bundle.inputData?.['company'])
                formData.append('address2', bundle.inputData?.['address2'])
                formData.append('locale', bundle.inputData?.['locale'])
                formData.append('email_invoices', bundle.inputData?.['email_invoices'])
                formData.append('email_abuse', bundle.inputData?.['email_abuse'])
                formData.append('disable_reset', bundle.inputData?.['disable_reset'])
                formData.append('disable_reinstall', bundle.inputData?.['disable_reinstall'])
                formData.append('disable_server_notifications', bundle.inputData?.['disable_server_notifications'])
                formData.append('disable_email_notifications', bundle.inputData?.['disable_email_notifications'])
                formData.append('gstin', bundle.inputData?.['gstin'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateAccountIpLimits: {
        key: 'updateAccountIpLimits',
        noun: 'Account',
        display: {
            label: 'Add IP Access Restriction',
            description: 'Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'start',
                    label: 'The begining (or first) IP address in the range.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'end',
                    label: 'The ending (or last) IP address in the range.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('start', bundle.inputData?.['start'])
                formData.append('end', bundle.inputData?.['end'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/iplimits'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountIpLimits', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateAccountPassword: {
        key: 'updateAccountPassword',
        noun: 'Account',
        display: {
            label: 'Change Account Password',
            description: 'Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'password',
                    label: '',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('password', bundle.inputData?.['password'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/password'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountPassword', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    updateAccountSshKey: {
        key: 'updateAccountSshKey',
        noun: 'Account',
        display: {
            label: 'Update SSH Keys',
            description: 'Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'ssh_key',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('ssh_key', bundle.inputData?.['ssh_key'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/sshkey'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountSshKey', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateAccountTfa: {
        key: 'updateAccountTfa',
        noun: 'Account',
        display: {
            label: 'Enable Two-Factor Authentication',
            description: 'Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: '2fa_google_code',
                    label: 'The 6-digit verification code from your authenticator app.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('2fa_google_code', bundle.inputData?.['2fa_google_code'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/2fa'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountTfa', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
