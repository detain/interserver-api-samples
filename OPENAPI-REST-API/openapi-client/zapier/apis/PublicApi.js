const samples = require('../samples/PublicApi');
const BuyItNowList = require('../models/BuyItNowList');
const CaptchaResponse = require('../models/CaptchaResponse');
const LoginErrorResponse = require('../models/LoginErrorResponse');
const LoginInfo = require('../models/LoginInfo');
const LoginSubmissionExample = require('../models/LoginSubmissionExample');
const LoginSubmissionExample_g_recaptcha_response = require('../models/LoginSubmissionExample_g_recaptcha_response');
const LoginSuccessResponse = require('../models/LoginSuccessResponse');
const ServicesInfo = require('../models/ServicesInfo');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const getOauthRedirect_200_response = require('../models/getOauthRedirect_200_response');
const patchOauthTwoFactor_200_response = require('../models/patchOauthTwoFactor_200_response');
const patchOauthTwoFactor_request = require('../models/patchOauthTwoFactor_request');
const postOauthCallback_200_response = require('../models/postOauthCallback_200_response');
const postOauthCallback_request = require('../models/postOauthCallback_request');
const utils = require('../utils/utils');
const FormData = require('form-data');

module.exports = {
    getCaptcha: {
        key: 'getCaptcha',
        noun: 'Public',
        display: {
            label: 'Get Captcha Challenge',
            description: 'Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...CaptchaResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/captcha'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getCaptcha', response.json);
                    return results;
                })
            },
            sample: samples['CaptchaResponseSample']
        }
    },
    getCountries: {
        key: 'getCountries',
        noun: 'Public',
        display: {
            label: 'Get Countries',
            description: 'Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'fetch_by',
                    label: 'Get countries by iso2 or iso3 or numcode',
                    type: 'string',
                    choices: [
                        'iso2',
                        'iso3',
                        'numcode',
                    ],
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/countries'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'fetch_by': bundle.inputData?.['fetch_by'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getCountries', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    getInfo: {
        key: 'getInfo',
        noun: 'Public',
        display: {
            label: 'Get Server Info',
            description: 'Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...ServicesInfo.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/info'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getInfo', response.json);
                    return results;
                })
            },
            sample: samples['ServicesInfoSample']
        }
    },
    getLoginInfo: {
        key: 'getLoginInfo',
        noun: 'Public',
        display: {
            label: 'Get Login Info',
            description: 'Gets the various pieces of information useful for generating a login page.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...LoginInfo.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/login'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLoginInfo', response.json);
                    return results;
                })
            },
            sample: samples['LoginInfoSample']
        }
    },
    getMPServers: {
        key: 'getMPServers',
        noun: 'ServersPublic',
        display: {
            label: 'List Marketplace Servers',
            description: 'Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...BuyItNowList.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/buy_now_servers_list'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMPServers', response.json);
                    return results;
                })
            },
            sample: samples['BuyItNowListSample']
        }
    },
    getOauthRedirect: {
        key: 'getOauthRedirect',
        noun: 'Public',
        display: {
            label: 'Get OAuth Redirect URL',
            description: 'Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'provider',
                    label: 'The OAuth provider name (e.g. &#x60;Google&#x60;).',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...getOauthRedirect_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/oauth'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'provider': bundle.inputData?.['provider'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getOauthRedirect', response.json);
                    return results;
                })
            },
            sample: samples['getOauthRedirect_200_responseSample']
        }
    },
    getTimezones: {
        key: 'getTimezones',
        noun: 'Public',
        display: {
            label: 'Get Available Timezones',
            description: 'Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/timezones'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getTimezones', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    patchOauthTwoFactor: {
        key: 'patchOauthTwoFactor',
        noun: 'Public',
        display: {
            label: 'Complete OAuth Two-Factor Verification',
            description: 'Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...patchOauthTwoFactor_request.fields(),
            ],
            outputFields: [
                ...patchOauthTwoFactor_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/oauth'),
                    method: 'PATCH',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...patchOauthTwoFactor_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'patchOauthTwoFactor', response.json);
                    return results;
                })
            },
            sample: samples['patchOauthTwoFactor_200_responseSample']
        }
    },
    pingServer: {
        key: 'pingServer',
        noun: 'Public',
        display: {
            label: 'Ping Server',
            description: 'Performs a single ping/pong request to let you know if the server is up.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ping'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'pingServer', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    postOauthCallback: {
        key: 'postOauthCallback',
        noun: 'Public',
        display: {
            label: 'OAuth Callback',
            description: 'Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'provider',
                    label: 'The OAuth provider name (e.g. &#x60;Google&#x60;).',
                    type: 'string',
                    required: true,
                },
                ...postOauthCallback_request.fields(),
            ],
            outputFields: [
                ...postOauthCallback_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/oauth'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                        'provider': bundle.inputData?.['provider'],
                    },
                    body: {
                        ...postOauthCallback_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postOauthCallback', response.json);
                    return results;
                })
            },
            sample: samples['postOauthCallback_200_responseSample']
        }
    },
    submitLogin: {
        key: 'submitLogin',
        noun: 'Public',
        display: {
            label: 'Submit Login Information',
            description: 'Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'login',
                    label: '',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'passwd',
                    label: '',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'remember',
                    label: '',
                    type: 'string',
                },
                ...LoginSubmissionExample_g_recaptcha_response.fields(),
                {
                    key: 'tfa',
                    label: 'Two Factor Authentication Response.',
                    type: 'string',
                },
            ],
            outputFields: [
                ...LoginSuccessResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('login', bundle.inputData?.['login'])
                formData.append('passwd', bundle.inputData?.['passwd'])
                formData.append('remember', bundle.inputData?.['remember'])
                formData.append('g-recaptcha-response', bundle.inputData?.['g-recaptcha-response'])
                formData.append('tfa', bundle.inputData?.['tfa'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/login'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'submitLogin', response.json);
                    return results;
                })
            },
            sample: samples['LoginSuccessResponseSample']
        }
    },
    submitSignup: {
        key: 'submitSignup',
        noun: 'Public',
        display: {
            label: 'Submit Signup Information',
            description: 'Creates a new account in our system using the provided information.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...LoginSubmissionExample.fields(),
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/signup'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...LoginSubmissionExample.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'submitSignup', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
}
