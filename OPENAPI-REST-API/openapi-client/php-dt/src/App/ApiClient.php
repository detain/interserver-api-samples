<?php
declare(strict_types=1);

namespace App;

use Articus\DataTransfer as DT;
use OpenAPIGenerator\APIClient as OAGAC;
use Psr\Http\Client\ClientExceptionInterface;
use Psr\Http\Message\ResponseInterface;

/**
 * InterServer Management API
 * # Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.
 * The version of the OpenAPI document: 0.9.0
 */
class ApiClient extends OAGAC\AbstractApiClient
{
    //region addAccountCreditCard
    /**
     * Add Credit Card to Account
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addAccountCreditCardRaw(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/creditcards', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add Credit Card to Account
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addAccountCreditCard(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addAccountCreditCardRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add Credit Card to Account
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addAccountCreditCardResult(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->addAccountCreditCard($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addBackup
    /**
     * Place Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addBackupRaw(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/backups/order', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addBackup(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addBackupRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response from the backup order call including invoice IDs for payment. */
                $responseContent = new \App\DTO\BackupOrderPostResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\BackupOrderPostResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addBackupResult(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\BackupOrderPostResponse
    {
        return $this->getSuccessfulContent(...$this->addBackup($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addBillingCreditCard
    /**
     * Add Credit Card for Billing
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addBillingCreditCardRaw(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/billing/creditcards', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add Credit Card for Billing
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addBillingCreditCard(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addBillingCreditCardRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add Credit Card for Billing
     * @param \App\DTO\BillingAddCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addBillingCreditCardResult(
        \App\DTO\BillingAddCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->addBillingCreditCard($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addBillingPrepay
    /**
     * Create Prepay Deposit
     * @param \App\DTO\BillingPrepayRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addBillingPrepayRaw(
        \App\DTO\BillingPrepayRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/billing/prepays', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Prepay Deposit
     * @param \App\DTO\BillingPrepayRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addBillingPrepay(
        \App\DTO\BillingPrepayRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addBillingPrepayRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Prepay Deposit
     * @param \App\DTO\BillingPrepayRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addBillingPrepayResult(
        \App\DTO\BillingPrepayRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->addBillingPrepay($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addDnsDomain
    /**
     * Create DNS Domain
     * @param \App\DTO\DnsNewDomain $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addDnsDomainRaw(
        \App\DTO\DnsNewDomain $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/dns', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create DNS Domain
     * @param \App\DTO\DnsNewDomain $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addDnsDomain(
        \App\DTO\DnsNewDomain $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addDnsDomainRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create DNS Domain
     * @param \App\DTO\DnsNewDomain $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addDnsDomainResult(
        \App\DTO\DnsNewDomain $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addDnsDomain($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addDnsRecord
    /**
     * Add DNS Record to Domain
     * @param \App\DTO\AddDnsRecordParameterData $parameters
     * @param \App\DTO\DnsNewRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addDnsRecordRaw(
        \App\DTO\AddDnsRecordParameterData $parameters,
        \App\DTO\DnsNewRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/dns/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add DNS Record to Domain
     * @param \App\DTO\AddDnsRecordParameterData $parameters
     * @param \App\DTO\DnsNewRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addDnsRecord(
        \App\DTO\AddDnsRecordParameterData $parameters,
        \App\DTO\DnsNewRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addDnsRecordRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Add DNS Domain Response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add DNS Record to Domain
     * @param \App\DTO\AddDnsRecordParameterData $parameters
     * @param \App\DTO\DnsNewRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addDnsRecordResult(
        \App\DTO\AddDnsRecordParameterData $parameters,
        \App\DTO\DnsNewRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addDnsRecord($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addDomain
    /**
     * Place Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addDomainRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addDomain(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addDomainRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addDomainResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addDomain($security, $responseMediaType));
    }
    //endregion

    //region addDomainDnssec
    /**
     * Add Domain DNSSEC Records
     * @param \App\DTO\AddDomainDnssecParameterData $parameters
     * @param \App\DTO\DomainDnssecRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addDomainDnssecRaw(
        \App\DTO\AddDomainDnssecParameterData $parameters,
        \App\DTO\DomainDnssecRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/dnssec', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add Domain DNSSEC Records
     * @param \App\DTO\AddDomainDnssecParameterData $parameters
     * @param \App\DTO\DomainDnssecRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addDomainDnssec(
        \App\DTO\AddDomainDnssecParameterData $parameters,
        \App\DTO\DomainDnssecRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addDomainDnssecRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add Domain DNSSEC Records
     * @param \App\DTO\AddDomainDnssecParameterData $parameters
     * @param \App\DTO\DomainDnssecRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addDomainDnssecResult(
        \App\DTO\AddDomainDnssecParameterData $parameters,
        \App\DTO\DomainDnssecRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->addDomainDnssec($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addDomainNameserver
    /**
     * Add Registered Nameserver
     * @param \App\DTO\AddDomainNameserverParameterData $parameters
     * @param \App\DTO\DomainNameserverPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addDomainNameserverRaw(
        \App\DTO\AddDomainNameserverParameterData $parameters,
        \App\DTO\DomainNameserverPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/nameservers', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add Registered Nameserver
     * @param \App\DTO\AddDomainNameserverParameterData $parameters
     * @param \App\DTO\DomainNameserverPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addDomainNameserver(
        \App\DTO\AddDomainNameserverParameterData $parameters,
        \App\DTO\DomainNameserverPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addDomainNameserverRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add Registered Nameserver
     * @param \App\DTO\AddDomainNameserverParameterData $parameters
     * @param \App\DTO\DomainNameserverPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addDomainNameserverResult(
        \App\DTO\AddDomainNameserverParameterData $parameters,
        \App\DTO\DomainNameserverPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->addDomainNameserver($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addFloatingIp
    /**
     * Place Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addFloatingIpRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/floating_ips/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addFloatingIp(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addFloatingIpRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addFloatingIpResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addFloatingIp($security, $responseMediaType));
    }
    //endregion

    //region addLicense
    /**
     * Place License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addLicenseRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/licenses/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addLicense(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addLicenseRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addLicenseResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addLicense($security, $responseMediaType));
    }
    //endregion

    //region addMail
    /**
     * Place Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addMailRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addMail(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addMailRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addMailResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addMail($security, $responseMediaType));
    }
    //endregion

    //region addNewTicket
    /**
     * Create New Ticket
     * @param \App\DTO\TicketNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addNewTicketRaw(
        \App\DTO\TicketNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/tickets/new', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create New Ticket
     * @param \App\DTO\TicketNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addNewTicket(
        \App\DTO\TicketNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addNewTicketRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A successful response after creating a ticket */
                $responseContent = new \App\DTO\TicketNewResponse();
                break;
            case 400:
                /* A successful response after creating a ticket */
                $responseContent = new \App\DTO\TicketNewResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create New Ticket
     * @param \App\DTO\TicketNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TicketNewResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addNewTicketResult(
        \App\DTO\TicketNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TicketNewResponse
    {
        return $this->getSuccessfulContent(...$this->addNewTicket($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addQs
    /**
     * Place QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addQsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addQs(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addQsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addQsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addQs($security, $responseMediaType));
    }
    //endregion

    //region addRule
    /**
     * Create Deny Rule
     * @param \App\DTO\AddRuleParameterData $parameters
     * @param \App\DTO\DenyRuleNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addRuleRaw(
        \App\DTO\AddRuleParameterData $parameters,
        \App\DTO\DenyRuleNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/rules', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Deny Rule
     * @param \App\DTO\AddRuleParameterData $parameters
     * @param \App\DTO\DenyRuleNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addRule(
        \App\DTO\AddRuleParameterData $parameters,
        \App\DTO\DenyRuleNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addRuleRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Deny rule created successfully. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Deny Rule
     * @param \App\DTO\AddRuleParameterData $parameters
     * @param \App\DTO\DenyRuleNew $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addRuleResult(
        \App\DTO\AddRuleParameterData $parameters,
        \App\DTO\DenyRuleNew $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->addRule($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addServer
    /**
     * Place Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addServerRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addServer(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addServerRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addServerResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addServer($security, $responseMediaType));
    }
    //endregion

    //region addSsl
    /**
     * Place SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addSslRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/ssl/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addSsl(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addSslRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addSslResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addSsl($security, $responseMediaType));
    }
    //endregion

    //region addVps
    /**
     * Place VPS Order
     * @param \App\DTO\VpsOrderPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addVpsRaw(
        \App\DTO\VpsOrderPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/order', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place VPS Order
     * @param \App\DTO\VpsOrderPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addVps(
        \App\DTO\VpsOrderPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addVpsRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place VPS Order
     * @param \App\DTO\VpsOrderPostRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addVpsResult(
        \App\DTO\VpsOrderPostRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addVps($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region addWebsite
    /**
     * Place Website Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function addWebsiteRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/websites/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Website Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function addWebsite(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->addWebsiteRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Website Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function addWebsiteResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->addWebsite($security, $responseMediaType));
    }
    //endregion

    //region buyItNowServerOrder
    /**
     * Get Buy Now Server Options
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function buyItNowServerOrderRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/order/buy_now_server', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Buy Now Server Options
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function buyItNowServerOrder(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->buyItNowServerOrderRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Available server configurations with pricing and hardware options. */
                $responseContent = new \App\DTO\BuyItNowServerOrder200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Buy Now Server Options
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BuyItNowServerOrder200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function buyItNowServerOrderResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BuyItNowServerOrder200Response
    {
        return $this->getSuccessfulContent(...$this->buyItNowServerOrder($security, $responseMediaType));
    }
    //endregion

    //region cancelBackup
    /**
     * Cancel Backup Service
     * @param \App\DTO\CancelBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function cancelBackupRaw(
        \App\DTO\CancelBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/backups/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Backup Service
     * @param \App\DTO\CancelBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function cancelBackup(
        \App\DTO\CancelBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->cancelBackupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Backups Cancel */
                $responseContent = new \App\DTO\CancelBackup200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Backup Service
     * @param \App\DTO\CancelBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\CancelBackup200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function cancelBackupResult(
        \App\DTO\CancelBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\CancelBackup200Response
    {
        return $this->getSuccessfulContent(...$this->cancelBackup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region cancelDomain
    /**
     * Cancel Domain Order
     * @param \App\DTO\CancelDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function cancelDomainRaw(
        \App\DTO\CancelDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/domains/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Domain Order
     * @param \App\DTO\CancelDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function cancelDomain(
        \App\DTO\CancelDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->cancelDomainRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Domains Cancel */
                $responseContent = new \App\DTO\CancelDomain200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Domain Order
     * @param \App\DTO\CancelDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\CancelDomain200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function cancelDomainResult(
        \App\DTO\CancelDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\CancelDomain200Response
    {
        return $this->getSuccessfulContent(...$this->cancelDomain($parameters, $security, $responseMediaType));
    }
    //endregion

    //region cancelScrubIp
    /**
     * Cancel Scrub IP Service
     * @param \App\DTO\CancelScrubIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function cancelScrubIpRaw(
        \App\DTO\CancelScrubIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/scrub_ips/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Scrub IP Service
     * @param \App\DTO\CancelScrubIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function cancelScrubIp(
        \App\DTO\CancelScrubIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->cancelScrubIpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Request OK */
                $responseContent = new \App\DTO\CancelScrubIp200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Scrub IP Service
     * @param \App\DTO\CancelScrubIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\CancelScrubIp200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function cancelScrubIpResult(
        \App\DTO\CancelScrubIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\CancelScrubIp200Response
    {
        return $this->getSuccessfulContent(...$this->cancelScrubIp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region changeAccountUsername
    /**
     * Change Account Username
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function changeAccountUsernameRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/username', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Account Username
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function changeAccountUsername(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->changeAccountUsernameRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Account Username
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function changeAccountUsernameResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->changeAccountUsername($security, $responseMediaType));
    }
    //endregion

    //region closeTicket
    /**
     * Close Ticket
     * @param \App\DTO\CloseTicketParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function closeTicketRaw(
        \App\DTO\CloseTicketParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/tickets/{id}/close', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Close Ticket
     * @param \App\DTO\CloseTicketParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function closeTicket(
        \App\DTO\CloseTicketParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->closeTicketRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Close ticket. */
                $responseContent = new \App\DTO\CloseTicketResponseSchema();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Close Ticket
     * @param \App\DTO\CloseTicketParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\CloseTicketResponseSchema
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function closeTicketResult(
        \App\DTO\CloseTicketParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\CloseTicketResponseSchema
    {
        return $this->getSuccessfulContent(...$this->closeTicket($parameters, $security, $responseMediaType));
    }
    //endregion

    //region createFilter
    /**
     * Create Traffic Filter
     * @param \App\DTO\CreateFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function createFilterRaw(
        \App\DTO\CreateFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/create_filter', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Traffic Filter
     * @param \App\DTO\CreateFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function createFilter(
        \App\DTO\CreateFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->createFilterRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 201:
                /* Request OK */
                $responseContent = new \App\DTO\CreateFilter201Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\CreateFilter400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\CreateFilter500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Traffic Filter
     * @param \App\DTO\CreateFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\CreateFilter201Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function createFilterResult(
        \App\DTO\CreateFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\CreateFilter201Response
    {
        return $this->getSuccessfulContent(...$this->createFilter($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region createGeoRule
    /**
     * Create Geo Firewall Rule
     * @param \App\DTO\CreateGeoRuleParameterData $parameters
     * @param \App\DTO\CreateGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function createGeoRuleRaw(
        \App\DTO\CreateGeoRuleParameterData $parameters,
        \App\DTO\CreateGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/create_geo_rule', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Geo Firewall Rule
     * @param \App\DTO\CreateGeoRuleParameterData $parameters
     * @param \App\DTO\CreateGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function createGeoRule(
        \App\DTO\CreateGeoRuleParameterData $parameters,
        \App\DTO\CreateGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->createGeoRuleRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 201:
                /* Create firewall rule for scrub ip */
                $responseContent = new \App\DTO\CreateRule201Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\CreateGeoRule400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\CreateRule500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Geo Firewall Rule
     * @param \App\DTO\CreateGeoRuleParameterData $parameters
     * @param \App\DTO\CreateGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\CreateRule201Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function createGeoRuleResult(
        \App\DTO\CreateGeoRuleParameterData $parameters,
        \App\DTO\CreateGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\CreateRule201Response
    {
        return $this->getSuccessfulContent(...$this->createGeoRule($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region createMailAlert
    /**
     * Create Mail Alert
     * @param \App\DTO\CreateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function createMailAlertRaw(
        \App\DTO\CreateMailAlertParameterData $parameters,
        \App\DTO\MailAlertRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/alerts', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Mail Alert
     * @param \App\DTO\CreateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function createMailAlert(
        \App\DTO\CreateMailAlertParameterData $parameters,
        \App\DTO\MailAlertRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->createMailAlertRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Mail Alert
     * @param \App\DTO\CreateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function createMailAlertResult(
        \App\DTO\CreateMailAlertParameterData $parameters,
        \App\DTO\MailAlertRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->createMailAlert($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region createRule
    /**
     * Create Firewall Rule
     * @param \App\DTO\CreateRuleParameterData $parameters
     * @param \App\DTO\CreateFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function createRuleRaw(
        \App\DTO\CreateRuleParameterData $parameters,
        \App\DTO\CreateFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/create_rule', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create Firewall Rule
     * @param \App\DTO\CreateRuleParameterData $parameters
     * @param \App\DTO\CreateFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function createRule(
        \App\DTO\CreateRuleParameterData $parameters,
        \App\DTO\CreateFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->createRuleRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 201:
                /* Create firewall rule for scrub ip */
                $responseContent = new \App\DTO\CreateRule201Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\CreateRule400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\CreateRule500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create Firewall Rule
     * @param \App\DTO\CreateRuleParameterData $parameters
     * @param \App\DTO\CreateFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\CreateRule201Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function createRuleResult(
        \App\DTO\CreateRuleParameterData $parameters,
        \App\DTO\CreateFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\CreateRule201Response
    {
        return $this->getSuccessfulContent(...$this->createRule($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region deleteAccountCreditCard
    /**
     * Remove Credit Card
     * @param \App\DTO\DeleteAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteAccountCreditCardRaw(
        \App\DTO\DeleteAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/account/creditcards/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Remove Credit Card
     * @param \App\DTO\DeleteAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteAccountCreditCard(
        \App\DTO\DeleteAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteAccountCreditCardRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Remove Credit Card
     * @param \App\DTO\DeleteAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteAccountCreditCardResult(
        \App\DTO\DeleteAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->deleteAccountCreditCard($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteAccountOauthName
    /**
     * Unlink OAuth Account
     * @param \App\DTO\DeleteAccountOauthNameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteAccountOauthNameRaw(
        \App\DTO\DeleteAccountOauthNameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/account/oauth/{name}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Unlink OAuth Account
     * @param \App\DTO\DeleteAccountOauthNameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteAccountOauthName(
        \App\DTO\DeleteAccountOauthNameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteAccountOauthNameRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Unlink OAuth Account
     * @param \App\DTO\DeleteAccountOauthNameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteAccountOauthNameResult(
        \App\DTO\DeleteAccountOauthNameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteAccountOauthName($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteAccountTfa
    /**
     * Disable Two-Factor Authentication
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteAccountTfaRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/account/2fa', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable Two-Factor Authentication
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteAccountTfa(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteAccountTfaRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable Two-Factor Authentication
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteAccountTfaResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteAccountTfa($security, $responseMediaType));
    }
    //endregion

    //region deleteBillingCreditCard
    /**
     * Delete Credit Card
     * @param \App\DTO\DeleteBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteBillingCreditCardRaw(
        \App\DTO\DeleteBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/billing/creditcards/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Credit Card
     * @param \App\DTO\DeleteBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteBillingCreditCard(
        \App\DTO\DeleteBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteBillingCreditCardRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Credit Card
     * @param \App\DTO\DeleteBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteBillingCreditCardResult(
        \App\DTO\DeleteBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteBillingCreditCard($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteBillingInvoice
    /**
     * Delete Invoice
     * @param \App\DTO\DeleteBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteBillingInvoiceRaw(
        \App\DTO\DeleteBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/billing/invoices/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Invoice
     * @param \App\DTO\DeleteBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteBillingInvoice(
        \App\DTO\DeleteBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteBillingInvoiceRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Invoice
     * @param \App\DTO\DeleteBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteBillingInvoiceResult(
        \App\DTO\DeleteBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteBillingInvoice($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteBillingPrepay
    /**
     * Delete Prepay Balance
     * @param \App\DTO\DeleteBillingPrepayParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteBillingPrepayRaw(
        \App\DTO\DeleteBillingPrepayParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/billing/prepays/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Prepay Balance
     * @param \App\DTO\DeleteBillingPrepayParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteBillingPrepay(
        \App\DTO\DeleteBillingPrepayParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteBillingPrepayRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Prepay Balance
     * @param \App\DTO\DeleteBillingPrepayParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteBillingPrepayResult(
        \App\DTO\DeleteBillingPrepayParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteBillingPrepay($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteDnsDomain
    /**
     * Delete DNS Domain
     * @param \App\DTO\DeleteDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteDnsDomainRaw(
        \App\DTO\DeleteDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/dns/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete DNS Domain
     * @param \App\DTO\DeleteDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteDnsDomain(
        \App\DTO\DeleteDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteDnsDomainRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete DNS Domain
     * @param \App\DTO\DeleteDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteDnsDomainResult(
        \App\DTO\DeleteDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->deleteDnsDomain($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteDnsRecord
    /**
     * Delete DNS Record
     * @param \App\DTO\DeleteDnsRecordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteDnsRecordRaw(
        \App\DTO\DeleteDnsRecordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/dns/{domainId}/{recordId}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete DNS Record
     * @param \App\DTO\DeleteDnsRecordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteDnsRecord(
        \App\DTO\DeleteDnsRecordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteDnsRecordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete DNS Record
     * @param \App\DTO\DeleteDnsRecordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteDnsRecordResult(
        \App\DTO\DeleteDnsRecordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->deleteDnsRecord($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteDomainDnssec
    /**
     * Remove Domain DNSSEC Records
     * @param \App\DTO\DeleteDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteDomainDnssecRaw(
        \App\DTO\DeleteDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/domains/{id}/dnssec', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Remove Domain DNSSEC Records
     * @param \App\DTO\DeleteDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteDomainDnssec(
        \App\DTO\DeleteDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteDomainDnssecRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Remove Domain DNSSEC Records
     * @param \App\DTO\DeleteDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteDomainDnssecResult(
        \App\DTO\DeleteDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteDomainDnssec($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteDomainNameserver
    /**
     * Delete Registered Nameserver
     * @param \App\DTO\DeleteDomainNameserverParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteDomainNameserverRaw(
        \App\DTO\DeleteDomainNameserverParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/domains/{id}/nameservers', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Registered Nameserver
     * @param \App\DTO\DeleteDomainNameserverParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteDomainNameserver(
        \App\DTO\DeleteDomainNameserverParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteDomainNameserverRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Registered Nameserver
     * @param \App\DTO\DeleteDomainNameserverParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteDomainNameserverResult(
        \App\DTO\DeleteDomainNameserverParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteDomainNameserver($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteFilter
    /**
     * Delete Traffic Filter
     * @param \App\DTO\DeleteFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteFilterRaw(
        \App\DTO\DeleteFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/delete_filter', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Traffic Filter
     * @param \App\DTO\DeleteFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteFilter(
        \App\DTO\DeleteFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteFilterRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Delete filter for scrub ip */
                $responseContent = new \App\DTO\DeleteFilter200Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\DeleteFilter400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\DeleteFilter500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Traffic Filter
     * @param \App\DTO\DeleteFilterParameterData $parameters
     * @param \App\DTO\CreateFilter $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\DeleteFilter200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteFilterResult(
        \App\DTO\DeleteFilterParameterData $parameters,
        \App\DTO\CreateFilter $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\DeleteFilter200Response
    {
        return $this->getSuccessfulContent(...$this->deleteFilter($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region deleteIpLimit
    /**
     * Remove IP Access Restriction
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteIpLimitRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PATCH', '/account/iplimits', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Remove IP Access Restriction
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteIpLimit(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteIpLimitRaw($security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* IP Range removed. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Remove IP Access Restriction
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteIpLimitResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->deleteIpLimit($security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region deleteMailAlert
    /**
     * Delete Mail Alert
     * @param \App\DTO\DeleteMailAlertParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteMailAlertRaw(
        \App\DTO\DeleteMailAlertParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/mail/{id}/alerts', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Mail Alert
     * @param \App\DTO\DeleteMailAlertParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteMailAlert(
        \App\DTO\DeleteMailAlertParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteMailAlertRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Mail Alert
     * @param \App\DTO\DeleteMailAlertParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteMailAlertResult(
        \App\DTO\DeleteMailAlertParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteMailAlert($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteQsBackup
    /**
     * Delete QuickServer Backup
     * @param \App\DTO\DeleteQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteQsBackupRaw(
        \App\DTO\DeleteQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/qs/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete QuickServer Backup
     * @param \App\DTO\DeleteQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteQsBackup(
        \App\DTO\DeleteQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteQsBackupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete QuickServer Backup
     * @param \App\DTO\DeleteQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteQsBackupResult(
        \App\DTO\DeleteQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteQsBackup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteRule
    /**
     * Delete Deny Rule
     * @param \App\DTO\DeleteRuleParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteRuleRaw(
        \App\DTO\DeleteRuleParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/mail/{id}/rules/{rule}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Deny Rule
     * @param \App\DTO\DeleteRuleParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteRule(
        \App\DTO\DeleteRuleParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteRuleRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Deny rule deleted successfully. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Deny Rule
     * @param \App\DTO\DeleteRuleParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteRuleResult(
        \App\DTO\DeleteRuleParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->deleteRule($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteTicketInfo
    /**
     * Close Ticket
     * @param \App\DTO\DeleteTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteTicketInfoRaw(
        \App\DTO\DeleteTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/tickets/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Close Ticket
     * @param \App\DTO\DeleteTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteTicketInfo(
        \App\DTO\DeleteTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteTicketInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Ticket Information */
                $responseContent = new \App\DTO\ViewTicketResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Close Ticket
     * @param \App\DTO\DeleteTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ViewTicketResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteTicketInfoResult(
        \App\DTO\DeleteTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ViewTicketResponse
    {
        return $this->getSuccessfulContent(...$this->deleteTicketInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region deleteVpsBackup
    /**
     * Delete VPS Backup
     * @param \App\DTO\DeleteVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function deleteVpsBackupRaw(
        \App\DTO\DeleteVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/vps/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete VPS Backup
     * @param \App\DTO\DeleteVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function deleteVpsBackup(
        \App\DTO\DeleteVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->deleteVpsBackupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete VPS Backup
     * @param \App\DTO\DeleteVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function deleteVpsBackupResult(
        \App\DTO\DeleteVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->deleteVpsBackup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region delistBlock
    /**
     * Remove Email Address from Block List
     * @param \App\DTO\DelistBlockParameterData $parameters
     * @param \App\DTO\EmailAddress $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function delistBlockRaw(
        \App\DTO\DelistBlockParameterData $parameters,
        \App\DTO\EmailAddress $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/blocks/delete', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Remove Email Address from Block List
     * @param \App\DTO\DelistBlockParameterData $parameters
     * @param \App\DTO\EmailAddress $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function delistBlock(
        \App\DTO\DelistBlockParameterData $parameters,
        \App\DTO\EmailAddress $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->delistBlockRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Email address removed from block list successfully. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Remove Email Address from Block List
     * @param \App\DTO\DelistBlockParameterData $parameters
     * @param \App\DTO\EmailAddress $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function delistBlockResult(
        \App\DTO\DelistBlockParameterData $parameters,
        \App\DTO\EmailAddress $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->delistBlock($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region disableScrub
    /**
     * Disable Scrub Protection
     * @param \App\DTO\DisableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function disableScrubRaw(
        \App\DTO\DisableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/{id}/disable', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable Scrub Protection
     * @param \App\DTO\DisableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function disableScrub(
        \App\DTO\DisableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->disableScrubRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Request OK */
                $responseContent = new \App\DTO\DisableScrub200Response();
                break;
            case 400:
                /* Bad request */
                $responseContent = new \App\DTO\DisableScrub400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\DisableScrub500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable Scrub Protection
     * @param \App\DTO\DisableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DisableScrub200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function disableScrubResult(
        \App\DTO\DisableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DisableScrub200Response
    {
        return $this->getSuccessfulContent(...$this->disableScrub($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsBlockSmtp
    /**
     * Block QuickServer SMTP
     * @param \App\DTO\DoQsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsBlockSmtpRaw(
        \App\DTO\DoQsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/block_smtp', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Block QuickServer SMTP
     * @param \App\DTO\DoQsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsBlockSmtp(
        \App\DTO\DoQsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsBlockSmtpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Block QuickServer SMTP
     * @param \App\DTO\DoQsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsBlockSmtpResult(
        \App\DTO\DoQsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsBlockSmtp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsDisableCd
    /**
     * Disable CD Drive
     * @param \App\DTO\DoQsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsDisableCdRaw(
        \App\DTO\DoQsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/disable_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable CD Drive
     * @param \App\DTO\DoQsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsDisableCd(
        \App\DTO\DoQsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsDisableCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable CD Drive
     * @param \App\DTO\DoQsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsDisableCdResult(
        \App\DTO\DoQsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsDisableCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsDisableQuota
    /**
     * Disable Quotas
     * @param \App\DTO\DoQsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsDisableQuotaRaw(
        \App\DTO\DoQsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/disable_quota', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable Quotas
     * @param \App\DTO\DoQsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsDisableQuota(
        \App\DTO\DoQsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsDisableQuotaRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable Quotas
     * @param \App\DTO\DoQsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsDisableQuotaResult(
        \App\DTO\DoQsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsDisableQuota($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsEjectCd
    /**
     * Eject CD Drive
     * @param \App\DTO\DoQsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsEjectCdRaw(
        \App\DTO\DoQsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/eject_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Eject CD Drive
     * @param \App\DTO\DoQsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsEjectCd(
        \App\DTO\DoQsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsEjectCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Eject CD Drive
     * @param \App\DTO\DoQsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsEjectCdResult(
        \App\DTO\DoQsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsEjectCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsEnableQuota
    /**
     * Enable Quotas
     * @param \App\DTO\DoQsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsEnableQuotaRaw(
        \App\DTO\DoQsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/enable_quota', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Enable Quotas
     * @param \App\DTO\DoQsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsEnableQuota(
        \App\DTO\DoQsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsEnableQuotaRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Enable Quotas
     * @param \App\DTO\DoQsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsEnableQuotaResult(
        \App\DTO\DoQsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsEnableQuota($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsRestart
    /**
     * Restart QuickServer
     * @param \App\DTO\DoQsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsRestartRaw(
        \App\DTO\DoQsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/restart', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Restart QuickServer
     * @param \App\DTO\DoQsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsRestart(
        \App\DTO\DoQsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsRestartRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Restart QuickServer
     * @param \App\DTO\DoQsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsRestartResult(
        \App\DTO\DoQsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsRestart($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsStart
    /**
     * Start QuickServer
     * @param \App\DTO\DoQsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsStartRaw(
        \App\DTO\DoQsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/start', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Start QuickServer
     * @param \App\DTO\DoQsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsStart(
        \App\DTO\DoQsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsStartRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Start QuickServer
     * @param \App\DTO\DoQsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsStartResult(
        \App\DTO\DoQsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsStart($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doQsStop
    /**
     * Stop QuickServer
     * @param \App\DTO\DoQsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doQsStopRaw(
        \App\DTO\DoQsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/stop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Stop QuickServer
     * @param \App\DTO\DoQsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doQsStop(
        \App\DTO\DoQsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doQsStopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Stop QuickServer
     * @param \App\DTO\DoQsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doQsStopResult(
        \App\DTO\DoQsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doQsStop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsBlockSmtp
    /**
     * Blocks SMTP
     * @param \App\DTO\DoVpsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsBlockSmtpRaw(
        \App\DTO\DoVpsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/block_smtp', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Blocks SMTP
     * @param \App\DTO\DoVpsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsBlockSmtp(
        \App\DTO\DoVpsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsBlockSmtpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Blocks SMTP
     * @param \App\DTO\DoVpsBlockSmtpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsBlockSmtpResult(
        \App\DTO\DoVpsBlockSmtpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsBlockSmtp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsDisableCd
    /**
     * Disable CD Drive
     * @param \App\DTO\DoVpsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsDisableCdRaw(
        \App\DTO\DoVpsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/disable_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable CD Drive
     * @param \App\DTO\DoVpsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsDisableCd(
        \App\DTO\DoVpsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsDisableCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable CD Drive
     * @param \App\DTO\DoVpsDisableCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsDisableCdResult(
        \App\DTO\DoVpsDisableCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsDisableCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsDisableQuota
    /**
     * Disable Quotas
     * @param \App\DTO\DoVpsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsDisableQuotaRaw(
        \App\DTO\DoVpsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/disable_quota', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Disable Quotas
     * @param \App\DTO\DoVpsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsDisableQuota(
        \App\DTO\DoVpsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsDisableQuotaRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Disable Quotas
     * @param \App\DTO\DoVpsDisableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsDisableQuotaResult(
        \App\DTO\DoVpsDisableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsDisableQuota($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsEjectCd
    /**
     * Eject CD Drive
     * @param \App\DTO\DoVpsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsEjectCdRaw(
        \App\DTO\DoVpsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/eject_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Eject CD Drive
     * @param \App\DTO\DoVpsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsEjectCd(
        \App\DTO\DoVpsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsEjectCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Eject CD Drive
     * @param \App\DTO\DoVpsEjectCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsEjectCdResult(
        \App\DTO\DoVpsEjectCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsEjectCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsEnableQuota
    /**
     * Enable Quotas
     * @param \App\DTO\DoVpsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsEnableQuotaRaw(
        \App\DTO\DoVpsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/enable_quota', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Enable Quotas
     * @param \App\DTO\DoVpsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsEnableQuota(
        \App\DTO\DoVpsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsEnableQuotaRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Enable Quotas
     * @param \App\DTO\DoVpsEnableQuotaParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsEnableQuotaResult(
        \App\DTO\DoVpsEnableQuotaParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsEnableQuota($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsRestart
    /**
     * Restart VPS
     * @param \App\DTO\DoVpsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsRestartRaw(
        \App\DTO\DoVpsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/restart', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Restart VPS
     * @param \App\DTO\DoVpsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsRestart(
        \App\DTO\DoVpsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsRestartRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Restart VPS
     * @param \App\DTO\DoVpsRestartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsRestartResult(
        \App\DTO\DoVpsRestartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsRestart($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsStart
    /**
     * Start VPS
     * @param \App\DTO\DoVpsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsStartRaw(
        \App\DTO\DoVpsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/start', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Start VPS
     * @param \App\DTO\DoVpsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsStart(
        \App\DTO\DoVpsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsStartRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Start VPS
     * @param \App\DTO\DoVpsStartParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsStartResult(
        \App\DTO\DoVpsStartParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsStart($parameters, $security, $responseMediaType));
    }
    //endregion

    //region doVpsStop
    /**
     * Stop VPS
     * @param \App\DTO\DoVpsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function doVpsStopRaw(
        \App\DTO\DoVpsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/stop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Stop VPS
     * @param \App\DTO\DoVpsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function doVpsStop(
        \App\DTO\DoVpsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->doVpsStopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Stop VPS
     * @param \App\DTO\DoVpsStopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function doVpsStopResult(
        \App\DTO\DoVpsStopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->doVpsStop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region downloadQsBackup
    /**
     * Download QuickServer Backup
     * @param \App\DTO\DownloadQsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function downloadQsBackupRaw(
        \App\DTO\DownloadQsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PATCH', '/qs/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Download QuickServer Backup
     * @param \App\DTO\DownloadQsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function downloadQsBackup(
        \App\DTO\DownloadQsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->downloadQsBackupRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Download URL for the backup file. */
                $responseContent = new \App\DTO\DownloadQsBackup200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Download QuickServer Backup
     * @param \App\DTO\DownloadQsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\DownloadQsBackup200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function downloadQsBackupResult(
        \App\DTO\DownloadQsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\DownloadQsBackup200Response
    {
        return $this->getSuccessfulContent(...$this->downloadQsBackup($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region downloadVpsBackup
    /**
     * Download VPS Backup
     * @param \App\DTO\DownloadVpsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function downloadVpsBackupRaw(
        \App\DTO\DownloadVpsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PATCH', '/vps/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Download VPS Backup
     * @param \App\DTO\DownloadVpsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function downloadVpsBackup(
        \App\DTO\DownloadVpsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->downloadVpsBackupRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Download URL for the backup file. */
                $responseContent = new \App\DTO\DownloadQsBackup200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Download VPS Backup
     * @param \App\DTO\DownloadVpsBackupParameterData $parameters
     * @param \App\DTO\DownloadQsBackupRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\DownloadQsBackup200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function downloadVpsBackupResult(
        \App\DTO\DownloadVpsBackupParameterData $parameters,
        \App\DTO\DownloadQsBackupRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\DownloadQsBackup200Response
    {
        return $this->getSuccessfulContent(...$this->downloadVpsBackup($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region enableScrub
    /**
     * Enable Scrub Protection
     * @param \App\DTO\EnableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function enableScrubRaw(
        \App\DTO\EnableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/{id}/enable', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Enable Scrub Protection
     * @param \App\DTO\EnableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function enableScrub(
        \App\DTO\EnableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->enableScrubRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Request OK */
                $responseContent = new \App\DTO\EnableScrub200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\EnableScrub500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Enable Scrub Protection
     * @param \App\DTO\EnableScrubParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\EnableScrub200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function enableScrubResult(
        \App\DTO\EnableScrubParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\EnableScrub200Response
    {
        return $this->getSuccessfulContent(...$this->enableScrub($parameters, $security, $responseMediaType));
    }
    //endregion

    //region floatingIpsCancel
    /**
     * Cancel Floating IP
     * @param \App\DTO\FloatingIpsCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function floatingIpsCancelRaw(
        \App\DTO\FloatingIpsCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/floating_ips/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Floating IP
     * @param \App\DTO\FloatingIpsCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function floatingIpsCancel(
        \App\DTO\FloatingIpsCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->floatingIpsCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Floating Ip Cancel */
                $responseContent = new \App\DTO\FloatingIpsCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Floating IP
     * @param \App\DTO\FloatingIpsCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\FloatingIpsCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function floatingIpsCancelResult(
        \App\DTO\FloatingIpsCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\FloatingIpsCancel200Response
    {
        return $this->getSuccessfulContent(...$this->floatingIpsCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getAccountInfo
    /**
     * Retrieve Account Details
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAccountInfoRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/account', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Retrieve Account Details
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAccountInfo(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAccountInfoRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Your account information. */
                $responseContent = new \App\DTO\AccountInfo();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Retrieve Account Details
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\AccountInfo
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAccountInfoResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\AccountInfo
    {
        return $this->getSuccessfulContent(...$this->getAccountInfo($security, $responseMediaType));
    }
    //endregion

    //region getAccountTfaSetup
    /**
     * Get Two-Factor Setup Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAccountTfaSetupRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/account/2fa', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Two-Factor Setup Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAccountTfaSetup(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAccountTfaSetupRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Two-factor authentication setup data. */
                $responseContent = new \App\DTO\GetAccountTfaSetup200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Two-Factor Setup Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GetAccountTfaSetup200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAccountTfaSetupResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GetAccountTfaSetup200Response
    {
        return $this->getSuccessfulContent(...$this->getAccountTfaSetup($security, $responseMediaType));
    }
    //endregion

    //region getAffiliateBanners
    /**
     * List Affiliate Banner Assets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateBannersRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/banners', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Affiliate Banner Assets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateBanners(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateBannersRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Affiliate Banners Array */
                $responseContent = new \App\DTO\Collection6();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Affiliate Banner Assets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection6
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateBannersResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection6
    {
        return $this->getSuccessfulContent(...$this->getAffiliateBanners($security, $responseMediaType));
    }
    //endregion

    //region getAffiliateRichReport
    /**
     * Get Affiliate Performance Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateRichReportRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/rich_report', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Affiliate Performance Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateRichReport(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateRichReportRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Affiliate Performance Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateRichReportResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->getAffiliateRichReport($security, $responseMediaType));
    }
    //endregion

    //region getAffiliateSalesGraph
    /**
     * Get Affiliate Sales Graph Data
     * @param \App\DTO\GetAffiliateSalesGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateSalesGraphRaw(
        \App\DTO\GetAffiliateSalesGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/sales_graph', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Affiliate Sales Graph Data
     * @param \App\DTO\GetAffiliateSalesGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateSalesGraph(
        \App\DTO\GetAffiliateSalesGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateSalesGraphRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Affiliate sales graph data broken down by time period. */
                $responseContent = new \App\DTO\StatusMonthlyBreakdown();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Affiliate Sales Graph Data
     * @param \App\DTO\GetAffiliateSalesGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\StatusMonthlyBreakdown
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateSalesGraphResult(
        \App\DTO\GetAffiliateSalesGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\StatusMonthlyBreakdown
    {
        return $this->getSuccessfulContent(...$this->getAffiliateSalesGraph($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getAffiliateSalesReport
    /**
     * Get Affiliate Sales Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateSalesReportRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/sales_report', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Affiliate Sales Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateSalesReport(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateSalesReportRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Affiliate Sales Report
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateSalesReportResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->getAffiliateSalesReport($security, $responseMediaType));
    }
    //endregion

    //region getAffiliateTrafficGraph
    /**
     * Get Affiliate Traffic Graph Data
     * @param \App\DTO\GetAffiliateTrafficGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateTrafficGraphRaw(
        \App\DTO\GetAffiliateTrafficGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/traffic_graph', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Affiliate Traffic Graph Data
     * @param \App\DTO\GetAffiliateTrafficGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateTrafficGraph(
        \App\DTO\GetAffiliateTrafficGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateTrafficGraphRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Affiliate traffic graph data broken down by time period. */
                $responseContent = new \App\DTO\MonthlyCounts();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Affiliate Traffic Graph Data
     * @param \App\DTO\GetAffiliateTrafficGraphParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MonthlyCounts
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateTrafficGraphResult(
        \App\DTO\GetAffiliateTrafficGraphParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MonthlyCounts
    {
        return $this->getSuccessfulContent(...$this->getAffiliateTrafficGraph($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getAffiliateWebTraffic
    /**
     * List Affiliate Web Traffic Entries
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getAffiliateWebTrafficRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/affiliate/web_traffic', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Affiliate Web Traffic Entries
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getAffiliateWebTraffic(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getAffiliateWebTrafficRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The recent affiliate web traffic */
                $responseContent = new \App\DTO\Collection8();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Affiliate Web Traffic Entries
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection8
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getAffiliateWebTrafficResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection8
    {
        return $this->getSuccessfulContent(...$this->getAffiliateWebTraffic($security, $responseMediaType));
    }
    //endregion

    //region getBackupInfo
    /**
     * Get Backup Service Details
     * @param \App\DTO\GetBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBackupInfoRaw(
        \App\DTO\GetBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Backup Service Details
     * @param \App\DTO\GetBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBackupInfo(
        \App\DTO\GetBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBackupInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Full backup service details including serviceInfo, billingDetails, and client_links. */
                $responseContent = new \App\DTO\Backup();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Backup Service Details
     * @param \App\DTO\GetBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Backup
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBackupInfoResult(
        \App\DTO\GetBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Backup
    {
        return $this->getSuccessfulContent(...$this->getBackupInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBackupInvoices
    /**
     * Get Backup Order Invoices
     * @param \App\DTO\GetBackupInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBackupInvoicesRaw(
        \App\DTO\GetBackupInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Backup Order Invoices
     * @param \App\DTO\GetBackupInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBackupInvoices(
        \App\DTO\GetBackupInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBackupInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Backup Order Invoices
     * @param \App\DTO\GetBackupInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBackupInvoicesResult(
        \App\DTO\GetBackupInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getBackupInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBackupLogin
    /**
     * Get Backup Storage Panel Login
     * @param \App\DTO\GetBackupLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBackupLoginRaw(
        \App\DTO\GetBackupLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups/{id}/login', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Backup Storage Panel Login
     * @param \App\DTO\GetBackupLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBackupLogin(
        \App\DTO\GetBackupLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBackupLoginRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Login session details for the backup storage service. */
                $responseContent = new \App\DTO\BackupLoginResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Backup Storage Panel Login
     * @param \App\DTO\GetBackupLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BackupLoginResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBackupLoginResult(
        \App\DTO\GetBackupLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BackupLoginResponse
    {
        return $this->getSuccessfulContent(...$this->getBackupLogin($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBackupsList
    /**
     * List Backup Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBackupsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Backup Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBackupsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBackupsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of backup storage services on your account. */
                $responseContent = new \App\DTO\Collection9();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Backup Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection9
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBackupsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection9
    {
        return $this->getSuccessfulContent(...$this->getBackupsList($security, $responseMediaType));
    }
    //endregion

    //region getBackupsWelcomeEmail
    /**
     * Resend Backup Welcome Email
     * @param \App\DTO\GetBackupsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBackupsWelcomeEmailRaw(
        \App\DTO\GetBackupsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Backup Welcome Email
     * @param \App\DTO\GetBackupsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBackupsWelcomeEmail(
        \App\DTO\GetBackupsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBackupsWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Backup Welcome Email
     * @param \App\DTO\GetBackupsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBackupsWelcomeEmailResult(
        \App\DTO\GetBackupsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getBackupsWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBillingCart
    /**
     * Get Shopping Cart Contents
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBillingCartRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/billing/cart', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Shopping Cart Contents
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBillingCart(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBillingCartRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Shopping Cart Contents
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBillingCartResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getBillingCart($security, $responseMediaType));
    }
    //endregion

    //region getBillingCreditCardVerify
    /**
     * Get Credit Card Verification Requirements
     * @param \App\DTO\GetBillingCreditCardVerifyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBillingCreditCardVerifyRaw(
        \App\DTO\GetBillingCreditCardVerifyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/billing/creditcards/{id}/verify', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Credit Card Verification Requirements
     * @param \App\DTO\GetBillingCreditCardVerifyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBillingCreditCardVerify(
        \App\DTO\GetBillingCreditCardVerifyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBillingCreditCardVerifyRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Credit Card Verification Requirements
     * @param \App\DTO\GetBillingCreditCardVerifyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBillingCreditCardVerifyResult(
        \App\DTO\GetBillingCreditCardVerifyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getBillingCreditCardVerify($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBillingInvoice
    /**
     * Get Invoice Details
     * @param \App\DTO\GetBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBillingInvoiceRaw(
        \App\DTO\GetBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/billing/invoices/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Invoice Details
     * @param \App\DTO\GetBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBillingInvoice(
        \App\DTO\GetBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBillingInvoiceRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Detailed invoice payload for the requested invoice. */
                $responseContent = new \App\DTO\BillingInvoiceDetail();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Invoice Details
     * @param \App\DTO\GetBillingInvoiceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BillingInvoiceDetail
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBillingInvoiceResult(
        \App\DTO\GetBillingInvoiceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BillingInvoiceDetail
    {
        return $this->getSuccessfulContent(...$this->getBillingInvoice($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getBillingInvoices
    /**
     * List Account Invoices
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBillingInvoicesRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/billing/invoices', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Account Invoices
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBillingInvoices(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBillingInvoicesRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Invoice listing and summary for the account. */
                $responseContent = new \App\DTO\BillingInvoiceList();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Account Invoices
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BillingInvoiceList
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBillingInvoicesResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BillingInvoiceList
    {
        return $this->getSuccessfulContent(...$this->getBillingInvoices($security, $responseMediaType));
    }
    //endregion

    //region getBillingPrePays
    /**
     * List Prepay Balances
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getBillingPrePaysRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/billing/prepays', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Prepay Balances
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getBillingPrePays(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getBillingPrePaysRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Prepay Balances
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getBillingPrePaysResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getBillingPrePays($security, $responseMediaType));
    }
    //endregion

    //region getCaptcha
    /**
     * Get Captcha Challenge
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getCaptchaRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/captcha', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Captcha Challenge
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getCaptcha(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getCaptchaRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* An array containing a `captcha` field containing a string with a base64 encoded captcha image. */
                $responseContent = new \App\DTO\CaptchaResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Captcha Challenge
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\CaptchaResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getCaptchaResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\CaptchaResponse
    {
        return $this->getSuccessfulContent(...$this->getCaptcha($security, $responseMediaType));
    }
    //endregion

    //region getCountries
    /**
     * Get Countries
     * @param \App\DTO\GetCountriesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getCountriesRaw(
        \App\DTO\GetCountriesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/account/countries', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Countries
     * @param \App\DTO\GetCountriesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getCountries(
        \App\DTO\GetCountriesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getCountriesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The list of countries with both 2 letter abbreviations and the country names. */
                $responseContent = new object();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Countries
     * @param \App\DTO\GetCountriesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return object
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getCountriesResult(
        \App\DTO\GetCountriesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): object
    {
        return $this->getSuccessfulContent(...$this->getCountries($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDnsDomain
    /**
     * List Domain DNS Records
     * @param \App\DTO\GetDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDnsDomainRaw(
        \App\DTO\GetDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/dns/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Domain DNS Records
     * @param \App\DTO\GetDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDnsDomain(
        \App\DTO\GetDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDnsDomainRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The DNS records for the specified domain. */
                $responseContent = new \App\DTO\Collection25();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Domain DNS Records
     * @param \App\DTO\GetDnsDomainParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection25
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDnsDomainResult(
        \App\DTO\GetDnsDomainParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection25
    {
        return $this->getSuccessfulContent(...$this->getDnsDomain($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDnsList
    /**
     * List DNS Domains
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDnsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/dns', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List DNS Domains
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDnsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDnsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Listing of DNS domains on the account with their primary A record. */
                $responseContent = new \App\DTO\Collection24();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List DNS Domains
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection24
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDnsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection24
    {
        return $this->getSuccessfulContent(...$this->getDnsList($security, $responseMediaType));
    }
    //endregion

    //region getDomainContact
    /**
     * Get Domain Contact Details
     * @param \App\DTO\GetDomainContactParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainContactRaw(
        \App\DTO\GetDomainContactParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/contact', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Contact Details
     * @param \App\DTO\GetDomainContactParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainContact(
        \App\DTO\GetDomainContactParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainContactRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The registrant/admin contact details for the domain. */
                $responseContent = new \App\DTO\DomainContactDetails();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Contact Details
     * @param \App\DTO\GetDomainContactParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainContactDetails
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainContactResult(
        \App\DTO\GetDomainContactParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainContactDetails
    {
        return $this->getSuccessfulContent(...$this->getDomainContact($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainDnssec
    /**
     * Get Domain DNSSEC Records
     * @param \App\DTO\GetDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainDnssecRaw(
        \App\DTO\GetDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/dnssec', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain DNSSEC Records
     * @param \App\DTO\GetDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainDnssec(
        \App\DTO\GetDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainDnssecRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* DNSSEC records currently applied to the domain. */
                $responseContent = new \App\DTO\DomainDnssecRecords();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain DNSSEC Records
     * @param \App\DTO\GetDomainDnssecParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainDnssecRecords
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainDnssecResult(
        \App\DTO\GetDomainDnssecParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainDnssecRecords
    {
        return $this->getSuccessfulContent(...$this->getDomainDnssec($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainInfo
    /**
     * Get Domain Order
     * @param \App\DTO\GetDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainInfoRaw(
        \App\DTO\GetDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Order
     * @param \App\DTO\GetDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainInfo(
        \App\DTO\GetDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Domain Information. */
                $responseContent = new \App\DTO\Domain();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Order
     * @param \App\DTO\GetDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Domain
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainInfoResult(
        \App\DTO\GetDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Domain
    {
        return $this->getSuccessfulContent(...$this->getDomainInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainInvoices
    /**
     * Get Domain Invoices
     * @param \App\DTO\GetDomainInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainInvoicesRaw(
        \App\DTO\GetDomainInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Invoices
     * @param \App\DTO\GetDomainInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainInvoices(
        \App\DTO\GetDomainInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Invoices
     * @param \App\DTO\GetDomainInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainInvoicesResult(
        \App\DTO\GetDomainInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getDomainInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainLookup
    /**
     * Lookup Domain Availability and Pricing
     * @param \App\DTO\GetDomainLookupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainLookupRaw(
        \App\DTO\GetDomainLookupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/lookup/{name}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Lookup Domain Availability and Pricing
     * @param \App\DTO\GetDomainLookupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainLookup(
        \App\DTO\GetDomainLookupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainLookupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Availability, pricing, and field metadata for the requested domain. */
                $responseContent = new \App\DTO\DomainLookupResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 422:
                /* The domain input was invalid. */
                $responseContent = new \App\DTO\TextResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Lookup Domain Availability and Pricing
     * @param \App\DTO\GetDomainLookupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainLookupResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainLookupResult(
        \App\DTO\GetDomainLookupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainLookupResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainLookup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainNameservers
    /**
     * List Registered Nameservers
     * @param \App\DTO\GetDomainNameserversParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainNameserversRaw(
        \App\DTO\GetDomainNameserversParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/nameservers', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Registered Nameservers
     * @param \App\DTO\GetDomainNameserversParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainNameservers(
        \App\DTO\GetDomainNameserversParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainNameserversRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Domain registered nameservers list response */
                $responseContent = new \App\DTO\DomainNameserverGetResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Registered Nameservers
     * @param \App\DTO\GetDomainNameserversParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainNameserverGetResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainNameserversResult(
        \App\DTO\GetDomainNameserversParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainNameserverGetResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainNameservers($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainOrderFields
    /**
     * Get Domain Order Fields
     * @param \App\DTO\GetDomainOrderFieldsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainOrderFieldsRaw(
        \App\DTO\GetDomainOrderFieldsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/order/{domain}/{regType}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Order Fields
     * @param \App\DTO\GetDomainOrderFieldsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainOrderFields(
        \App\DTO\GetDomainOrderFieldsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainOrderFieldsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Registration-type-specific form field definitions. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Order Fields
     * @param \App\DTO\GetDomainOrderFieldsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainOrderFieldsResult(
        \App\DTO\GetDomainOrderFieldsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getDomainOrderFields($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainOrderSearchResults
    /**
     * Get Domain Order Search Results
     * @param \App\DTO\GetDomainOrderSearchResultsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainOrderSearchResultsRaw(
        \App\DTO\GetDomainOrderSearchResultsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/order/{domain}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Order Search Results
     * @param \App\DTO\GetDomainOrderSearchResultsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainOrderSearchResults(
        \App\DTO\GetDomainOrderSearchResultsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainOrderSearchResultsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Domain availability and pricing information. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Order Search Results
     * @param \App\DTO\GetDomainOrderSearchResultsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainOrderSearchResultsResult(
        \App\DTO\GetDomainOrderSearchResultsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getDomainOrderSearchResults($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainRenewal
    /**
     * Start Domain Renewal Flow
     * @param \App\DTO\GetDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainRenewalRaw(
        \App\DTO\GetDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/renew', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Start Domain Renewal Flow
     * @param \App\DTO\GetDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainRenewal(
        \App\DTO\GetDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainRenewalRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Start Domain Renewal Flow
     * @param \App\DTO\GetDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainRenewalResult(
        \App\DTO\GetDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainRenewal($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainSearch
    /**
     * Search Domain Suggestions
     * @param \App\DTO\GetDomainSearchParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainSearchRaw(
        \App\DTO\GetDomainSearchParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/search/{name}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Search Domain Suggestions
     * @param \App\DTO\GetDomainSearchParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainSearch(
        \App\DTO\GetDomainSearchParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainSearchRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Suggested and lookup results for the supplied search term. */
                $responseContent = new \App\DTO\DomainSearchResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* No search suggestions or registrar response available. */
                $responseContent = new \App\DTO\TextResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Search Domain Suggestions
     * @param \App\DTO\GetDomainSearchParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainSearchResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainSearchResult(
        \App\DTO\GetDomainSearchParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainSearchResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainSearch($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainTransfer
    /**
     * Start Domain Transfer Flow
     * @param \App\DTO\GetDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainTransferRaw(
        \App\DTO\GetDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/transfer', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Start Domain Transfer Flow
     * @param \App\DTO\GetDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainTransfer(
        \App\DTO\GetDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainTransferRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Start Domain Transfer Flow
     * @param \App\DTO\GetDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainTransferResult(
        \App\DTO\GetDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainTransfer($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainWhoisPrivacy
    /**
     * Get Whois Privacy Status
     * @param \App\DTO\GetDomainWhoisPrivacyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainWhoisPrivacyRaw(
        \App\DTO\GetDomainWhoisPrivacyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/whois', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Whois Privacy Status
     * @param \App\DTO\GetDomainWhoisPrivacyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainWhoisPrivacy(
        \App\DTO\GetDomainWhoisPrivacyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainWhoisPrivacyRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Whois Privacy Status
     * @param \App\DTO\GetDomainWhoisPrivacyParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainWhoisPrivacyResult(
        \App\DTO\GetDomainWhoisPrivacyParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainWhoisPrivacy($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getDomainsList
    /**
     * List Domain Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Domain Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Domains` services on your account. */
                $responseContent = new \App\DTO\Collection26();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Domain Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection26
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection26
    {
        return $this->getSuccessfulContent(...$this->getDomainsList($security, $responseMediaType));
    }
    //endregion

    //region getDomainsWelcomeEmail
    /**
     * Resend Domain Welcome Email
     * @param \App\DTO\GetDomainsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getDomainsWelcomeEmailRaw(
        \App\DTO\GetDomainsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Domain Welcome Email
     * @param \App\DTO\GetDomainsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getDomainsWelcomeEmail(
        \App\DTO\GetDomainsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getDomainsWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Domain Welcome Email
     * @param \App\DTO\GetDomainsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getDomainsWelcomeEmailResult(
        \App\DTO\GetDomainsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getDomainsWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getFloatingIpInfo
    /**
     * View Floating IP
     * @param \App\DTO\GetFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getFloatingIpInfoRaw(
        \App\DTO\GetFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/floating_ips/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * View Floating IP
     * @param \App\DTO\GetFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getFloatingIpInfo(
        \App\DTO\GetFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getFloatingIpInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * View Floating IP
     * @param \App\DTO\GetFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getFloatingIpInfoResult(
        \App\DTO\GetFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getFloatingIpInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getFloatingIpInvoices
    /**
     * Get Floating IP Invoices
     * @param \App\DTO\GetFloatingIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getFloatingIpInvoicesRaw(
        \App\DTO\GetFloatingIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/floating_ips/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Floating IP Invoices
     * @param \App\DTO\GetFloatingIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getFloatingIpInvoices(
        \App\DTO\GetFloatingIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getFloatingIpInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Floating IP Invoices
     * @param \App\DTO\GetFloatingIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getFloatingIpInvoicesResult(
        \App\DTO\GetFloatingIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getFloatingIpInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getFloatingIpsList
    /**
     * List Floating IPs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getFloatingIpsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/floating_ips', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Floating IPs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getFloatingIpsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getFloatingIpsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Floating IPs` services on your account. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Floating IPs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getFloatingIpsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getFloatingIpsList($security, $responseMediaType));
    }
    //endregion

    //region getFloatingIpsWelcomeEmail
    /**
     * Resend Floating IPs Welcome Email
     * @param \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getFloatingIpsWelcomeEmailRaw(
        \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/floating_ips/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Floating IPs Welcome Email
     * @param \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getFloatingIpsWelcomeEmail(
        \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getFloatingIpsWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Floating IPs Welcome Email
     * @param \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getFloatingIpsWelcomeEmailResult(
        \App\DTO\GetFloatingIpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getFloatingIpsWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getHome
    /**
     * Get Home Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getHomeRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/home', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Home Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getHome(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getHomeRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* General information for use on the home page. */
                $responseContent = new \App\DTO\Home();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Home Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Home
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getHomeResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Home
    {
        return $this->getSuccessfulContent(...$this->getHome($security, $responseMediaType));
    }
    //endregion

    //region getInfo
    /**
     * Get Server Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getInfoRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/info', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Server Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getInfo(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getInfoRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The modules and services information from the server. */
                $responseContent = new \App\DTO\ServicesInfo();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Server Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ServicesInfo
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getInfoResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServicesInfo
    {
        return $this->getSuccessfulContent(...$this->getInfo($security, $responseMediaType));
    }
    //endregion

    //region getInvoices
    /**
     * Get Invoices
     * @param \App\DTO\GetInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getInvoicesRaw(
        \App\DTO\GetInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/invoices', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Invoices
     * @param \App\DTO\GetInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getInvoices(
        \App\DTO\GetInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* search results matching criteria */
                $responseContent = new \App\DTO\Collection46();
                break;
            case 400:
                /* bad input parameter */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Invoices
     * @param \App\DTO\GetInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection46
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getInvoicesResult(
        \App\DTO\GetInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection46
    {
        return $this->getSuccessfulContent(...$this->getInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getLicenseInfo
    /**
     * Get License
     * @param \App\DTO\GetLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLicenseInfoRaw(
        \App\DTO\GetLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get License
     * @param \App\DTO\GetLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLicenseInfo(
        \App\DTO\GetLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLicenseInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* License information. */
                $responseContent = new \App\DTO\License();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get License
     * @param \App\DTO\GetLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\License
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLicenseInfoResult(
        \App\DTO\GetLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\License
    {
        return $this->getSuccessfulContent(...$this->getLicenseInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getLicenseInvoices
    /**
     * Get License Invoices
     * @param \App\DTO\GetLicenseInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLicenseInvoicesRaw(
        \App\DTO\GetLicenseInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get License Invoices
     * @param \App\DTO\GetLicenseInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLicenseInvoices(
        \App\DTO\GetLicenseInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLicenseInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get License Invoices
     * @param \App\DTO\GetLicenseInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLicenseInvoicesResult(
        \App\DTO\GetLicenseInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getLicenseInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getLicenseList
    /**
     * List Licenses
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLicenseListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Licenses
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLicenseList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLicenseListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Licenses` services on your account. */
                $responseContent = new \App\DTO\Collection47();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Licenses
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection47
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLicenseListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection47
    {
        return $this->getSuccessfulContent(...$this->getLicenseList($security, $responseMediaType));
    }
    //endregion

    //region getLicenseOrderCatTagInfo
    /**
     * Get License Order Information for Category
     * @param \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLicenseOrderCatTagInfoRaw(
        \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses/order/{catTag}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get License Order Information for Category
     * @param \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLicenseOrderCatTagInfo(
        \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLicenseOrderCatTagInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* License types and pricing for the specified category. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get License Order Information for Category
     * @param \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLicenseOrderCatTagInfoResult(
        \App\DTO\GetLicenseOrderCatTagInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getLicenseOrderCatTagInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getLicensesWelcomeEmail
    /**
     * Resend License Welcome Email
     * @param \App\DTO\GetLicensesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLicensesWelcomeEmailRaw(
        \App\DTO\GetLicensesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend License Welcome Email
     * @param \App\DTO\GetLicensesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLicensesWelcomeEmail(
        \App\DTO\GetLicensesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLicensesWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend License Welcome Email
     * @param \App\DTO\GetLicensesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLicensesWelcomeEmailResult(
        \App\DTO\GetLicensesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getLicensesWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getLoginInfo
    /**
     * Get Login Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getLoginInfoRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/login', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Login Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getLoginInfo(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getLoginInfoRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Various pieces of information useful for rendering a login page. */
                $responseContent = new \App\DTO\LoginInfo();
                break;
            case 403:
                /* Error response to a login request. */
                $responseContent = new \App\DTO\LoginErrorResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Login Info
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\LoginInfo
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getLoginInfoResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\LoginInfo
    {
        return $this->getSuccessfulContent(...$this->getLoginInfo($security, $responseMediaType));
    }
    //endregion

    //region getMPServers
    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMPServersRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/buy_now_servers_list', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMPServers(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMPServersRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Marketplace Buy it now servers list */
                $responseContent = new \App\DTO\BuyItNowList();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BuyItNowList
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMPServersResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BuyItNowList
    {
        return $this->getSuccessfulContent(...$this->getMPServers($security, $responseMediaType));
    }
    //endregion

    //region getMPServers_0
    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMPServers_0Raw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/buy_now_servers_list', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMPServers_0(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMPServers_0Raw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Marketplace Buy it now servers list */
                $responseContent = new \App\DTO\BuyItNowList();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Marketplace Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BuyItNowList
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMPServers_0Result(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BuyItNowList
    {
        return $this->getSuccessfulContent(...$this->getMPServers_0($security, $responseMediaType));
    }
    //endregion

    //region getMailAlerts
    /**
     * List Mail Alerts
     * @param \App\DTO\GetMailAlertsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailAlertsRaw(
        \App\DTO\GetMailAlertsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/alerts', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Mail Alerts
     * @param \App\DTO\GetMailAlertsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailAlerts(
        \App\DTO\GetMailAlertsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailAlertsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Alert configuration for the mail service. */
                $responseContent = new \App\DTO\MailAlertsResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Mail Alerts
     * @param \App\DTO\GetMailAlertsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailAlertsResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailAlertsResult(
        \App\DTO\GetMailAlertsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailAlertsResponse
    {
        return $this->getSuccessfulContent(...$this->getMailAlerts($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailBlocks
    /**
     * List Blocked Email Addresses
     * @param \App\DTO\GetMailBlocksParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailBlocksRaw(
        \App\DTO\GetMailBlocksParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/blocks', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Blocked Email Addresses
     * @param \App\DTO\GetMailBlocksParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailBlocks(
        \App\DTO\GetMailBlocksParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailBlocksRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* OK */
                $responseContent = new \App\DTO\MailBlocks();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Blocked Email Addresses
     * @param \App\DTO\GetMailBlocksParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailBlocks
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailBlocksResult(
        \App\DTO\GetMailBlocksParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailBlocks
    {
        return $this->getSuccessfulContent(...$this->getMailBlocks($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailDelist
    /**
     * Get Delist Status
     * @param \App\DTO\GetMailDelistParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailDelistRaw(
        \App\DTO\GetMailDelistParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/delist', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Delist Status
     * @param \App\DTO\GetMailDelistParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailDelist(
        \App\DTO\GetMailDelistParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailDelistRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Blocklist entries and delist details for the mail service. */
                $responseContent = new \App\DTO\MailDelistResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Delist Status
     * @param \App\DTO\GetMailDelistParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailDelistResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailDelistResult(
        \App\DTO\GetMailDelistParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailDelistResponse
    {
        return $this->getSuccessfulContent(...$this->getMailDelist($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailDeliverability
    /**
     * Get Deliverability Metrics
     * @param \App\DTO\GetMailDeliverabilityParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailDeliverabilityRaw(
        \App\DTO\GetMailDeliverabilityParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/deliverability', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Deliverability Metrics
     * @param \App\DTO\GetMailDeliverabilityParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailDeliverability(
        \App\DTO\GetMailDeliverabilityParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailDeliverabilityRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Deliverability metrics for the mail service. */
                $responseContent = new \App\DTO\MailDeliverabilityResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Deliverability Metrics
     * @param \App\DTO\GetMailDeliverabilityParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailDeliverabilityResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailDeliverabilityResult(
        \App\DTO\GetMailDeliverabilityParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailDeliverabilityResponse
    {
        return $this->getSuccessfulContent(...$this->getMailDeliverability($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailInfo
    /**
     * Get Mail Order
     * @param \App\DTO\GetMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailInfoRaw(
        \App\DTO\GetMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Mail Order
     * @param \App\DTO\GetMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailInfo(
        \App\DTO\GetMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Mail Information. */
                $responseContent = new \App\DTO\MailSchema();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Mail Order
     * @param \App\DTO\GetMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailSchema
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailInfoResult(
        \App\DTO\GetMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailSchema
    {
        return $this->getSuccessfulContent(...$this->getMailInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailInvoices
    /**
     * Get Mail Invoices
     * @param \App\DTO\GetMailInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailInvoicesRaw(
        \App\DTO\GetMailInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Mail Invoices
     * @param \App\DTO\GetMailInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailInvoices(
        \App\DTO\GetMailInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Mail Invoices
     * @param \App\DTO\GetMailInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailInvoicesResult(
        \App\DTO\GetMailInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getMailInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getMailList
    /**
     * List Mail Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Mail Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Mail` services on your account. */
                $responseContent = new \App\DTO\Collection52();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Mail Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection52
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection52
    {
        return $this->getSuccessfulContent(...$this->getMailList($security, $responseMediaType));
    }
    //endregion

    //region getMailWelcomeEmail
    /**
     * Resend Mail Welcome Email
     * @param \App\DTO\GetMailWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getMailWelcomeEmailRaw(
        \App\DTO\GetMailWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Mail Welcome Email
     * @param \App\DTO\GetMailWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getMailWelcomeEmail(
        \App\DTO\GetMailWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getMailWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Mail Welcome Email
     * @param \App\DTO\GetMailWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getMailWelcomeEmailResult(
        \App\DTO\GetMailWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getMailWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getNewBackup
    /**
     * Get Backup Order Form Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewBackupRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/backups/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Backup Order Form Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewBackup(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewBackupRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Information needed to generate an order form. */
                $responseContent = new \App\DTO\BackupsOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Backup Order Form Data
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\BackupsOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewBackupResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\BackupsOrder
    {
        return $this->getSuccessfulContent(...$this->getNewBackup($security, $responseMediaType));
    }
    //endregion

    //region getNewDomain
    /**
     * Get Domain Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewDomainRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/domains/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Domain Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewDomain(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewDomainRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Domain registration order information. */
                $responseContent = new \App\DTO\DomainOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Domain Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\DomainOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewDomainResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\DomainOrder
    {
        return $this->getSuccessfulContent(...$this->getNewDomain($security, $responseMediaType));
    }
    //endregion

    //region getNewFloatingIp
    /**
     * Get Floating IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewFloatingIpRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/floating_ips/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Floating IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewFloatingIp(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewFloatingIpRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Floating IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewFloatingIpResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getNewFloatingIp($security, $responseMediaType));
    }
    //endregion

    //region getNewLicense
    /**
     * Get License Order Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewLicenseRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/licenses/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get License Order Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewLicense(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewLicenseRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* License ordering information. */
                $responseContent = new \App\DTO\LicensesOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get License Order Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\LicensesOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewLicenseResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\LicensesOrder
    {
        return $this->getSuccessfulContent(...$this->getNewLicense($security, $responseMediaType));
    }
    //endregion

    //region getNewMail
    /**
     * Get Mail Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewMailRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Mail Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewMail(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewMailRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Mail ordering information. */
                $responseContent = new \App\DTO\MailOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Mail Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewMailResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailOrder
    {
        return $this->getSuccessfulContent(...$this->getNewMail($security, $responseMediaType));
    }
    //endregion

    //region getNewQs
    /**
     * Get QuickServer Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewQsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get QuickServer Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewQs(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewQsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Quickserver Ordering information. */
                $responseContent = new \App\DTO\QuickserverOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get QuickServer Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QuickserverOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewQsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QuickserverOrder
    {
        return $this->getSuccessfulContent(...$this->getNewQs($security, $responseMediaType));
    }
    //endregion

    //region getNewServer
    /**
     * Server Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewServerRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Server Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewServer(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewServerRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Server Ordering details */
                $responseContent = new \App\DTO\ServerOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Server Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ServerOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewServerResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServerOrder
    {
        return $this->getSuccessfulContent(...$this->getNewServer($security, $responseMediaType));
    }
    //endregion

    //region getNewSsl
    /**
     * SSL Cert Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewSslRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ssl/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * SSL Cert Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewSsl(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewSslRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * SSL Cert Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewSslResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getNewSsl($security, $responseMediaType));
    }
    //endregion

    //region getNewTicket
    /**
     * Gets Information for creating a new ticket.
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewTicketRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/tickets/new', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Gets Information for creating a new ticket.
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewTicket(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewTicketRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* New ticket form data including departments and service categories. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Gets Information for creating a new ticket.
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewTicketResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getNewTicket($security, $responseMediaType));
    }
    //endregion

    //region getNewVps
    /**
     * VPS Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewVpsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * VPS Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewVps(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewVpsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Order information */
                $responseContent = new \App\DTO\VpsOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * VPS Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewVpsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsOrder
    {
        return $this->getSuccessfulContent(...$this->getNewVps($security, $responseMediaType));
    }
    //endregion

    //region getNewWebsite
    /**
     * Website Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getNewWebsiteRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Website Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getNewWebsite(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getNewWebsiteRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Website ordering details including available plans and pricing. */
                $responseContent = new \App\DTO\WebsitesOrder();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Website Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\WebsitesOrder
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getNewWebsiteResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\WebsitesOrder
    {
        return $this->getSuccessfulContent(...$this->getNewWebsite($security, $responseMediaType));
    }
    //endregion

    //region getOauthRedirect
    /**
     * Get OAuth Redirect URL
     * @param \App\DTO\GetOauthRedirectParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getOauthRedirectRaw(
        \App\DTO\GetOauthRedirectParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/oauth', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get OAuth Redirect URL
     * @param \App\DTO\GetOauthRedirectParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getOauthRedirect(
        \App\DTO\GetOauthRedirectParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getOauthRedirectRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* OAuth redirect URL for the requested provider. */
                $responseContent = new \App\DTO\GetOauthRedirect200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get OAuth Redirect URL
     * @param \App\DTO\GetOauthRedirectParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GetOauthRedirect200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getOauthRedirectResult(
        \App\DTO\GetOauthRedirectParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GetOauthRedirect200Response
    {
        return $this->getSuccessfulContent(...$this->getOauthRedirect($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getOrderDetail
    /**
     * Get Scrub IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getOrderDetailRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Scrub IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getOrderDetail(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getOrderDetailRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Order details */
                $responseContent = new \App\DTO\GetOrderDetail200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Scrub IP Ordering Information
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GetOrderDetail200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getOrderDetailResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GetOrderDetail200Response
    {
        return $this->getSuccessfulContent(...$this->getOrderDetail($security, $responseMediaType));
    }
    //endregion

    //region getQsBackups
    /**
     * List QuickServer Backups
     * @param \App\DTO\GetQsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsBackupsRaw(
        \App\DTO\GetQsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List QuickServer Backups
     * @param \App\DTO\GetQsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsBackups(
        \App\DTO\GetQsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsBackupsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of available backups for the QuickServer. */
                $responseContent = new \App\DTO\VpsBackupRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List QuickServer Backups
     * @param \App\DTO\GetQsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsBackupRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsBackupsResult(
        \App\DTO\GetQsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsBackupRows
    {
        return $this->getSuccessfulContent(...$this->getQsBackups($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsChangeHostname
    /**
     * Get QuickServer Hostname
     * @param \App\DTO\GetQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsChangeHostnameRaw(
        \App\DTO\GetQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/change_hostname', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get QuickServer Hostname
     * @param \App\DTO\GetQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsChangeHostname(
        \App\DTO\GetQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsChangeHostnameRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Change Hostname info response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get QuickServer Hostname
     * @param \App\DTO\GetQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsChangeHostnameResult(
        \App\DTO\GetQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsChangeHostname($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsChangeRootPassword
    /**
     * Get Change Root Password Info
     * @param \App\DTO\GetQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsChangeRootPasswordRaw(
        \App\DTO\GetQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/change_root_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Change Root Password Info
     * @param \App\DTO\GetQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsChangeRootPassword(
        \App\DTO\GetQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsChangeRootPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Change Root Password response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Change Root Password Info
     * @param \App\DTO\GetQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsChangeRootPasswordResult(
        \App\DTO\GetQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsChangeRootPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsChangeTimezone
    /**
     * Get Timezone Info
     * @param \App\DTO\GetQsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsChangeTimezoneRaw(
        \App\DTO\GetQsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/change_timezone', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Timezone Info
     * @param \App\DTO\GetQsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsChangeTimezone(
        \App\DTO\GetQsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsChangeTimezoneRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Change Timezone info response */
                $responseContent = new \App\DTO\Collection76();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Timezone Info
     * @param \App\DTO\GetQsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection76
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsChangeTimezoneResult(
        \App\DTO\GetQsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection76
    {
        return $this->getSuccessfulContent(...$this->getQsChangeTimezone($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsChangeWebuzoPassword
    /**
     * Webuzo Change Pass Info
     * @param \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsChangeWebuzoPasswordRaw(
        \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/change_webuzo_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Webuzo Change Pass Info
     * @param \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsChangeWebuzoPassword(
        \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsChangeWebuzoPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Change Webuzo Password info response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Webuzo Change Pass Info
     * @param \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsChangeWebuzoPasswordResult(
        \App\DTO\GetQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsChangeWebuzoPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsInfo
    /**
     * Get QuickServer Order
     * @param \App\DTO\GetQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsInfoRaw(
        \App\DTO\GetQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get QuickServer Order
     * @param \App\DTO\GetQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsInfo(
        \App\DTO\GetQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Quickserver details */
                $responseContent = new \App\DTO\Quickserver();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get QuickServer Order
     * @param \App\DTO\GetQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Quickserver
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsInfoResult(
        \App\DTO\GetQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Quickserver
    {
        return $this->getSuccessfulContent(...$this->getQsInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsInsertCd
    /**
     * Insert CD Information
     * @param \App\DTO\GetQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsInsertCdRaw(
        \App\DTO\GetQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/insert_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Insert CD Information
     * @param \App\DTO\GetQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsInsertCd(
        \App\DTO\GetQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsInsertCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Insert CD info response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Insert CD Information
     * @param \App\DTO\GetQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsInsertCdResult(
        \App\DTO\GetQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsInsertCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsInvoices
    /**
     * Get QuickServer Invoices
     * @param \App\DTO\GetQsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsInvoicesRaw(
        \App\DTO\GetQsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get QuickServer Invoices
     * @param \App\DTO\GetQsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsInvoices(
        \App\DTO\GetQsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get QuickServer Invoices
     * @param \App\DTO\GetQsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsInvoicesResult(
        \App\DTO\GetQsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getQsInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsList
    /**
     * List QuickServers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List QuickServers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Quickservers` services on your account. */
                $responseContent = new \App\DTO\Collection68();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List QuickServers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection68
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection68
    {
        return $this->getSuccessfulContent(...$this->getQsList($security, $responseMediaType));
    }
    //endregion

    //region getQsReinstallOs
    /**
     * QuickServer Reinstall OS Options
     * @param \App\DTO\GetQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsReinstallOsRaw(
        \App\DTO\GetQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/reinstall_os', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * QuickServer Reinstall OS Options
     * @param \App\DTO\GetQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsReinstallOs(
        \App\DTO\GetQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsReinstallOsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Reinstall OS info response */
                $responseContent = new \App\DTO\VpsTemplatesList();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * QuickServer Reinstall OS Options
     * @param \App\DTO\GetQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsTemplatesList
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsReinstallOsResult(
        \App\DTO\GetQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsTemplatesList
    {
        return $this->getSuccessfulContent(...$this->getQsReinstallOs($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsResetPassword
    /**
     * Reset QuickServer Password Info
     * @param \App\DTO\GetQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsResetPasswordRaw(
        \App\DTO\GetQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/reset_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reset QuickServer Password Info
     * @param \App\DTO\GetQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsResetPassword(
        \App\DTO\GetQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsResetPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Reset password info */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reset QuickServer Password Info
     * @param \App\DTO\GetQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsResetPasswordResult(
        \App\DTO\GetQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsResetPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsReverseDns
    /**
     * Reverse DNS Info
     * @param \App\DTO\GetQsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsReverseDnsRaw(
        \App\DTO\GetQsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetQsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsReverseDns(
        \App\DTO\GetQsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsReverseDnsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* QuickServer Reverse DNS info response */
                $responseContent = new \App\DTO\ReverseDnsEntries();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetQsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ReverseDnsEntries
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsReverseDnsResult(
        \App\DTO\GetQsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ReverseDnsEntries
    {
        return $this->getSuccessfulContent(...$this->getQsReverseDns($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsSetupVnc
    /**
     * VNC Setup Info
     * @param \App\DTO\GetQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsSetupVncRaw(
        \App\DTO\GetQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/setup_vnc', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * VNC Setup Info
     * @param \App\DTO\GetQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsSetupVnc(
        \App\DTO\GetQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsSetupVncRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get QuickServer Setup VNC Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * VNC Setup Info
     * @param \App\DTO\GetQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsSetupVncResult(
        \App\DTO\GetQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsSetupVnc($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsTrafficUsage
    /**
     * Get Traffic Usage
     * @param \App\DTO\GetQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsTrafficUsageRaw(
        \App\DTO\GetQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/traffic_usage', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Traffic Usage
     * @param \App\DTO\GetQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsTrafficUsage(
        \App\DTO\GetQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsTrafficUsageRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get QuickServer Traffic usage */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Traffic Usage
     * @param \App\DTO\GetQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsTrafficUsageResult(
        \App\DTO\GetQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsTrafficUsage($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsViewDesktop
    /**
     * Get View Desktop Info
     * @param \App\DTO\GetQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsViewDesktopRaw(
        \App\DTO\GetQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/view_desktop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get View Desktop Info
     * @param \App\DTO\GetQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsViewDesktop(
        \App\DTO\GetQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsViewDesktopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get QuickServer View Desktop Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get View Desktop Info
     * @param \App\DTO\GetQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsViewDesktopResult(
        \App\DTO\GetQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getQsViewDesktop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getQsWelcomeEmail
    /**
     * Resend QuickServer Welcome Email
     * @param \App\DTO\GetQsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getQsWelcomeEmailRaw(
        \App\DTO\GetQsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/qs/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend QuickServer Welcome Email
     * @param \App\DTO\GetQsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getQsWelcomeEmail(
        \App\DTO\GetQsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getQsWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend QuickServer Welcome Email
     * @param \App\DTO\GetQsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getQsWelcomeEmailResult(
        \App\DTO\GetQsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->getQsWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getRules
    /**
     * List Deny Rules
     * @param \App\DTO\GetRulesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getRulesRaw(
        \App\DTO\GetRulesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/rules', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Deny Rules
     * @param \App\DTO\GetRulesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getRules(
        \App\DTO\GetRulesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getRulesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* List of configured deny rules. */
                $responseContent = new \App\DTO\Collection144();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Deny Rules
     * @param \App\DTO\GetRulesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection144
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getRulesResult(
        \App\DTO\GetRulesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection144
    {
        return $this->getSuccessfulContent(...$this->getRules($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getScrubIpDetails
    /**
     * Get Scrub IP Details
     * @param \App\DTO\GetScrubIpDetailsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getScrubIpDetailsRaw(
        \App\DTO\GetScrubIpDetailsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Scrub IP Details
     * @param \App\DTO\GetScrubIpDetailsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getScrubIpDetails(
        \App\DTO\GetScrubIpDetailsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getScrubIpDetailsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Scrub IP service details including firewall rules and filters. */
                $responseContent = new \App\DTO\GetScrubIpDetails200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Scrub IP Details
     * @param \App\DTO\GetScrubIpDetailsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GetScrubIpDetails200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getScrubIpDetailsResult(
        \App\DTO\GetScrubIpDetailsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GetScrubIpDetails200Response
    {
        return $this->getSuccessfulContent(...$this->getScrubIpDetails($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getScrubIpFilterTypes
    /**
     * List Scrub Filter Types
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getScrubIpFilterTypesRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/filter_types', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Scrub Filter Types
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getScrubIpFilterTypes(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getScrubIpFilterTypesRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Supported scrub filter types for building firewall rules. */
                $responseContent = new \App\DTO\ScrubIpFilterTypes();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Scrub Filter Types
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ScrubIpFilterTypes
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getScrubIpFilterTypesResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ScrubIpFilterTypes
    {
        return $this->getSuccessfulContent(...$this->getScrubIpFilterTypes($security, $responseMediaType));
    }
    //endregion

    //region getScrubIpInvoices
    /**
     * Get ScrubIp Invoices
     * @param \App\DTO\GetScrubIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getScrubIpInvoicesRaw(
        \App\DTO\GetScrubIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get ScrubIp Invoices
     * @param \App\DTO\GetScrubIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getScrubIpInvoices(
        \App\DTO\GetScrubIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getScrubIpInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get ScrubIp Invoices
     * @param \App\DTO\GetScrubIpInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getScrubIpInvoicesResult(
        \App\DTO\GetScrubIpInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getScrubIpInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getScrubIpLogs
    /**
     * Get Scrub IP Logs
     * @param \App\DTO\GetScrubIpLogsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getScrubIpLogsRaw(
        \App\DTO\GetScrubIpLogsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips/{id}/logs', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Scrub IP Logs
     * @param \App\DTO\GetScrubIpLogsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getScrubIpLogs(
        \App\DTO\GetScrubIpLogsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getScrubIpLogsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Scrub Ips logs */
                $responseContent = new \App\DTO\Collection90();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Scrub IP Logs
     * @param \App\DTO\GetScrubIpLogsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection90
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getScrubIpLogsResult(
        \App\DTO\GetScrubIpLogsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection90
    {
        return $this->getSuccessfulContent(...$this->getScrubIpLogs($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getScrubIpsList
    /**
     * List Scrub IP Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getScrubIpsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/scrub_ips', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Scrub IP Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getScrubIpsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getScrubIpsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Scrub Ips list */
                $responseContent = new \App\DTO\Collection79();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Scrub IP Services
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection79
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getScrubIpsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection79
    {
        return $this->getSuccessfulContent(...$this->getScrubIpsList($security, $responseMediaType));
    }
    //endregion

    //region getSearch
    /**
     * Search Autocomplete
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getSearchRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/search', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Search Autocomplete
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getSearch(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getSearchRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Search autocomplete results for the account. */
                $responseContent = new \App\DTO\SearchAutocompleteResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Search Autocomplete
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SearchAutocompleteResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getSearchResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SearchAutocompleteResponse
    {
        return $this->getSuccessfulContent(...$this->getSearch($security, $responseMediaType));
    }
    //endregion

    //region getServerInfo
    /**
     * Get Server Order
     * @param \App\DTO\GetServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getServerInfoRaw(
        \App\DTO\GetServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Server Order
     * @param \App\DTO\GetServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getServerInfo(
        \App\DTO\GetServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getServerInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Server details */
                $responseContent = new \App\DTO\Server();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Server Order
     * @param \App\DTO\GetServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Server
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getServerInfoResult(
        \App\DTO\GetServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Server
    {
        return $this->getSuccessfulContent(...$this->getServerInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getServerInvoices
    /**
     * Get Server Invoices
     * @param \App\DTO\GetServerInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getServerInvoicesRaw(
        \App\DTO\GetServerInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Server Invoices
     * @param \App\DTO\GetServerInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getServerInvoices(
        \App\DTO\GetServerInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getServerInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Server Invoices
     * @param \App\DTO\GetServerInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getServerInvoicesResult(
        \App\DTO\GetServerInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getServerInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getServerList
    /**
     * List Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getServerListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getServerList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getServerListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Servers` services on your account. */
                $responseContent = new \App\DTO\Collection91();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Servers
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection91
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getServerListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection91
    {
        return $this->getSuccessfulContent(...$this->getServerList($security, $responseMediaType));
    }
    //endregion

    //region getServerReverseDns
    /**
     * Reverse DNS Info
     * @param \App\DTO\GetServerReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getServerReverseDnsRaw(
        \App\DTO\GetServerReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetServerReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getServerReverseDns(
        \App\DTO\GetServerReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getServerReverseDnsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Servers Reverse DNS info response */
                $responseContent = new \App\DTO\ReverseDnsEntries();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetServerReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ReverseDnsEntries
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getServerReverseDnsResult(
        \App\DTO\GetServerReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ReverseDnsEntries
    {
        return $this->getSuccessfulContent(...$this->getServerReverseDns($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getServersWelcomeEmail
    /**
     * Resend Server Welcome Email
     * @param \App\DTO\GetServersWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getServersWelcomeEmailRaw(
        \App\DTO\GetServersWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Server Welcome Email
     * @param \App\DTO\GetServersWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getServersWelcomeEmail(
        \App\DTO\GetServersWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getServersWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Server Welcome Email
     * @param \App\DTO\GetServersWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getServersWelcomeEmailResult(
        \App\DTO\GetServersWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getServersWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getSslInfo
    /**
     * Get SSL Cert Info
     * @param \App\DTO\GetSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getSslInfoRaw(
        \App\DTO\GetSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ssl/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get SSL Cert Info
     * @param \App\DTO\GetSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getSslInfo(
        \App\DTO\GetSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getSslInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get SSL Cert Info
     * @param \App\DTO\GetSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getSslInfoResult(
        \App\DTO\GetSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getSslInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getSslInvoices
    /**
     * Get SSL Cert Invoices
     * @param \App\DTO\GetSslInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getSslInvoicesRaw(
        \App\DTO\GetSslInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ssl/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get SSL Cert Invoices
     * @param \App\DTO\GetSslInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getSslInvoices(
        \App\DTO\GetSslInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getSslInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get SSL Cert Invoices
     * @param \App\DTO\GetSslInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getSslInvoicesResult(
        \App\DTO\GetSslInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getSslInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getSslList
    /**
     * List SSL Certs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getSslListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ssl', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List SSL Certs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getSslList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getSslListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `SSL` services on your account. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List SSL Certs
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getSslListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getSslList($security, $responseMediaType));
    }
    //endregion

    //region getSslWelcomeEmail
    /**
     * Resend SSL Welcome Email
     * @param \App\DTO\GetSslWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getSslWelcomeEmailRaw(
        \App\DTO\GetSslWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ssl/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend SSL Welcome Email
     * @param \App\DTO\GetSslWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getSslWelcomeEmail(
        \App\DTO\GetSslWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getSslWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend SSL Welcome Email
     * @param \App\DTO\GetSslWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getSslWelcomeEmailResult(
        \App\DTO\GetSslWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getSslWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getStats
    /**
     * Get Mail Usage Statistics
     * @param \App\DTO\GetStatsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getStatsRaw(
        \App\DTO\GetStatsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/stats', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Mail Usage Statistics
     * @param \App\DTO\GetStatsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getStats(
        \App\DTO\GetStatsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getStatsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Mail service usage statistics. */
                $responseContent = new \App\DTO\MailStatsType();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Mail Usage Statistics
     * @param \App\DTO\GetStatsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailStatsType
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getStatsResult(
        \App\DTO\GetStatsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailStatsType
    {
        return $this->getSuccessfulContent(...$this->getStats($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getTicketInfo
    /**
     * Get Ticket Information
     * @param \App\DTO\GetTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getTicketInfoRaw(
        \App\DTO\GetTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/tickets/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Ticket Information
     * @param \App\DTO\GetTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getTicketInfo(
        \App\DTO\GetTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getTicketInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Ticket Information */
                $responseContent = new \App\DTO\ViewTicketResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Ticket Information
     * @param \App\DTO\GetTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ViewTicketResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getTicketInfoResult(
        \App\DTO\GetTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ViewTicketResponse
    {
        return $this->getSuccessfulContent(...$this->getTicketInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getTicketsList
    /**
     * List Support Tickets
     * @param \App\DTO\GetTicketsListParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getTicketsListRaw(
        \App\DTO\GetTicketsListParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/tickets', [], $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List Support Tickets
     * @param \App\DTO\GetTicketsListParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getTicketsList(
        \App\DTO\GetTicketsListParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getTicketsListRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of support tickets. */
                $responseContent = new \App\DTO\Tickets();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List Support Tickets
     * @param \App\DTO\GetTicketsListParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Tickets
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getTicketsListResult(
        \App\DTO\GetTicketsListParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Tickets
    {
        return $this->getSuccessfulContent(...$this->getTicketsList($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getTimezones
    /**
     * Get Available Timezones
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getTimezonesRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/account/timezones', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Available Timezones
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getTimezones(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getTimezonesRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* An array of all available timezone identifiers. */
                $responseContent = new \App\DTO\Collection145();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Available Timezones
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection145
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getTimezonesResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection145
    {
        return $this->getSuccessfulContent(...$this->getTimezones($security, $responseMediaType));
    }
    //endregion

    //region getVpsBackups
    /**
     * Get VPS Backups List
     * @param \App\DTO\GetVpsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsBackupsRaw(
        \App\DTO\GetVpsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/backups', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get VPS Backups List
     * @param \App\DTO\GetVpsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsBackups(
        \App\DTO\GetVpsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsBackupsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of the available backups */
                $responseContent = new \App\DTO\VpsBackupRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get VPS Backups List
     * @param \App\DTO\GetVpsBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsBackupRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsBackupsResult(
        \App\DTO\GetVpsBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsBackupRows
    {
        return $this->getSuccessfulContent(...$this->getVpsBackups($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsBuyHdSpace
    /**
     * HD Space Addon Info
     * @param \App\DTO\GetVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsBuyHdSpaceRaw(
        \App\DTO\GetVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/buy_hd_space', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * HD Space Addon Info
     * @param \App\DTO\GetVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsBuyHdSpace(
        \App\DTO\GetVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsBuyHdSpaceRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get VPS Buy HD Space information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * HD Space Addon Info
     * @param \App\DTO\GetVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsBuyHdSpaceResult(
        \App\DTO\GetVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getVpsBuyHdSpace($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsBuyIp
    /**
     * Additional IP Addon Info
     * @param \App\DTO\GetVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsBuyIpRaw(
        \App\DTO\GetVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/buy_ip', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Additional IP Addon Info
     * @param \App\DTO\GetVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsBuyIp(
        \App\DTO\GetVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsBuyIpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Buy IP information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Additional IP Addon Info
     * @param \App\DTO\GetVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsBuyIpResult(
        \App\DTO\GetVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getVpsBuyIp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsChangeTimezone
    /**
     * Get Timezone Info
     * @param \App\DTO\GetVpsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsChangeTimezoneRaw(
        \App\DTO\GetVpsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/change_timezone', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Timezone Info
     * @param \App\DTO\GetVpsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsChangeTimezone(
        \App\DTO\GetVpsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsChangeTimezoneRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Change Timezone info response */
                $responseContent = new \App\DTO\Collection121();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Timezone Info
     * @param \App\DTO\GetVpsChangeTimezoneParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection121
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsChangeTimezoneResult(
        \App\DTO\GetVpsChangeTimezoneParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection121
    {
        return $this->getSuccessfulContent(...$this->getVpsChangeTimezone($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsInfo
    /**
     * Get VPS Order
     * @param \App\DTO\GetVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsInfoRaw(
        \App\DTO\GetVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get VPS Order
     * @param \App\DTO\GetVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsInfo(
        \App\DTO\GetVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The VPS Information */
                $responseContent = new \App\DTO\Vps();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get VPS Order
     * @param \App\DTO\GetVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Vps
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsInfoResult(
        \App\DTO\GetVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Vps
    {
        return $this->getSuccessfulContent(...$this->getVpsInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsInvoices
    /**
     * Get VPS Invoices
     * @param \App\DTO\GetVpsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsInvoicesRaw(
        \App\DTO\GetVpsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get VPS Invoices
     * @param \App\DTO\GetVpsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsInvoices(
        \App\DTO\GetVpsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get VPS Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get VPS Invoices
     * @param \App\DTO\GetVpsInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsInvoicesResult(
        \App\DTO\GetVpsInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getVpsInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsList
    /**
     * List VPS Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * List VPS Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Vps` services on your account. */
                $responseContent = new \App\DTO\Collection109();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * List VPS Orders
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection109
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection109
    {
        return $this->getSuccessfulContent(...$this->getVpsList($security, $responseMediaType));
    }
    //endregion

    //region getVpsReinstallOs
    /**
     * VPS Reinstall OS Options
     * @param \App\DTO\GetVpsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsReinstallOsRaw(
        \App\DTO\GetVpsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/reinstall_os', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * VPS Reinstall OS Options
     * @param \App\DTO\GetVpsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsReinstallOs(
        \App\DTO\GetVpsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsReinstallOsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Reinstall OS info response */
                $responseContent = new \App\DTO\VpsTemplatesList();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * VPS Reinstall OS Options
     * @param \App\DTO\GetVpsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsTemplatesList
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsReinstallOsResult(
        \App\DTO\GetVpsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsTemplatesList
    {
        return $this->getSuccessfulContent(...$this->getVpsReinstallOs($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsReverseDns
    /**
     * Reverse DNS Info
     * @param \App\DTO\GetVpsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsReverseDnsRaw(
        \App\DTO\GetVpsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetVpsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsReverseDns(
        \App\DTO\GetVpsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsReverseDnsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Reverse DNS info response */
                $responseContent = new \App\DTO\ReverseDnsEntries();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reverse DNS Info
     * @param \App\DTO\GetVpsReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ReverseDnsEntries
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsReverseDnsResult(
        \App\DTO\GetVpsReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ReverseDnsEntries
    {
        return $this->getSuccessfulContent(...$this->getVpsReverseDns($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsSetupVnc
    /**
     * VNC Setup Info
     * @param \App\DTO\GetVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsSetupVncRaw(
        \App\DTO\GetVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/setup_vnc', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * VNC Setup Info
     * @param \App\DTO\GetVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsSetupVnc(
        \App\DTO\GetVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsSetupVncRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get VPS Setup VNC Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * VNC Setup Info
     * @param \App\DTO\GetVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsSetupVncResult(
        \App\DTO\GetVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getVpsSetupVnc($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsSlices
    /**
     * Slice Upgrade Info
     * @param \App\DTO\GetVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsSlicesRaw(
        \App\DTO\GetVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/slices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Slice Upgrade Info
     * @param \App\DTO\GetVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsSlices(
        \App\DTO\GetVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsSlicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Slices information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Slice Upgrade Info
     * @param \App\DTO\GetVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsSlicesResult(
        \App\DTO\GetVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getVpsSlices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsTrafficUsage
    /**
     * Get Traffic Usage
     * @param \App\DTO\GetVpsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsTrafficUsageRaw(
        \App\DTO\GetVpsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/traffic_usage', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Traffic Usage
     * @param \App\DTO\GetVpsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsTrafficUsage(
        \App\DTO\GetVpsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsTrafficUsageRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get VPS Traffic usage */
                $responseContent = new \App\DTO\VpsTrafficResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Traffic Usage
     * @param \App\DTO\GetVpsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VpsTrafficResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsTrafficUsageResult(
        \App\DTO\GetVpsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsTrafficResponse
    {
        return $this->getSuccessfulContent(...$this->getVpsTrafficUsage($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsViewDesktop
    /**
     * Get View Desktop Info
     * @param \App\DTO\GetVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsViewDesktopRaw(
        \App\DTO\GetVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/view_desktop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get View Desktop Info
     * @param \App\DTO\GetVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsViewDesktop(
        \App\DTO\GetVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsViewDesktopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get VPS View Desktop Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get View Desktop Info
     * @param \App\DTO\GetVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsViewDesktopResult(
        \App\DTO\GetVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->getVpsViewDesktop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getVpsWelcomeEmail
    /**
     * Resend VPS Welcome Email
     * @param \App\DTO\GetVpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getVpsWelcomeEmailRaw(
        \App\DTO\GetVpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend VPS Welcome Email
     * @param \App\DTO\GetVpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getVpsWelcomeEmail(
        \App\DTO\GetVpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getVpsWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend VPS Welcome Email
     * @param \App\DTO\GetVpsWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getVpsWelcomeEmailResult(
        \App\DTO\GetVpsWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getVpsWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsiteBuyIp
    /**
     * Get Website IP Information
     * @param \App\DTO\GetWebsiteBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsiteBuyIpRaw(
        \App\DTO\GetWebsiteBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/buy_ip', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website IP Information
     * @param \App\DTO\GetWebsiteBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsiteBuyIp(
        \App\DTO\GetWebsiteBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsiteBuyIpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Current IP addresses and their reverse DNS hostnames for the website. */
                $responseContent = new \App\DTO\GetWebsiteBuyIp200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website IP Information
     * @param \App\DTO\GetWebsiteBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\GetWebsiteBuyIp200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsiteBuyIpResult(
        \App\DTO\GetWebsiteBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\GetWebsiteBuyIp200Response
    {
        return $this->getSuccessfulContent(...$this->getWebsiteBuyIp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsiteInfo
    /**
     * Get Website Order
     * @param \App\DTO\GetWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsiteInfoRaw(
        \App\DTO\GetWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website Order
     * @param \App\DTO\GetWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsiteInfo(
        \App\DTO\GetWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsiteInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Website details */
                $responseContent = new \App\DTO\Website();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website Order
     * @param \App\DTO\GetWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Website
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsiteInfoResult(
        \App\DTO\GetWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Website
    {
        return $this->getSuccessfulContent(...$this->getWebsiteInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsiteInvoices
    /**
     * Get Website Invoices
     * @param \App\DTO\GetWebsiteInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsiteInvoicesRaw(
        \App\DTO\GetWebsiteInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/invoices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website Invoices
     * @param \App\DTO\GetWebsiteInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsiteInvoices(
        \App\DTO\GetWebsiteInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsiteInvoicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Invoices response */
                $responseContent = new \App\DTO\ChargeInvoiceRows();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website Invoices
     * @param \App\DTO\GetWebsiteInvoicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ChargeInvoiceRows
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsiteInvoicesResult(
        \App\DTO\GetWebsiteInvoicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ChargeInvoiceRows
    {
        return $this->getSuccessfulContent(...$this->getWebsiteInvoices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsiteList
    /**
     * Get Website Listing
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsiteListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website Listing
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsiteList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsiteListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* The listing of `Websites` services on your account. */
                $responseContent = new \App\DTO\Collection129();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website Listing
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Collection129
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsiteListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Collection129
    {
        return $this->getSuccessfulContent(...$this->getWebsiteList($security, $responseMediaType));
    }
    //endregion

    //region getWebsitesBackups
    /**
     * Get Website Backups
     * @param \App\DTO\GetWebsitesBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsitesBackupsRaw(
        \App\DTO\GetWebsitesBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/backups', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website Backups
     * @param \App\DTO\GetWebsitesBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsitesBackups(
        \App\DTO\GetWebsitesBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsitesBackupsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Website Backups response */
                $responseContent = new \App\DTO\WebsiteBackups();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website Backups
     * @param \App\DTO\GetWebsitesBackupsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\WebsiteBackups
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsitesBackupsResult(
        \App\DTO\GetWebsitesBackupsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\WebsiteBackups
    {
        return $this->getSuccessfulContent(...$this->getWebsitesBackups($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsitesLogin
    /**
     * Hosting Panel Auto Login
     * @param \App\DTO\GetWebsitesLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsitesLoginRaw(
        \App\DTO\GetWebsitesLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/login', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Hosting Panel Auto Login
     * @param \App\DTO\GetWebsitesLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsitesLogin(
        \App\DTO\GetWebsitesLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsitesLoginRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Get Website Login response */
                $responseContent = new \App\DTO\WebsiteLoginResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Hosting Panel Auto Login
     * @param \App\DTO\GetWebsitesLoginParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\WebsiteLoginResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsitesLoginResult(
        \App\DTO\GetWebsitesLoginParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\WebsiteLoginResponse
    {
        return $this->getSuccessfulContent(...$this->getWebsitesLogin($parameters, $security, $responseMediaType));
    }
    //endregion

    //region getWebsitesWelcomeEmail
    /**
     * Resend Website Welcome Email
     * @param \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function getWebsitesWelcomeEmailRaw(
        \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/welcome_email', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Resend Website Welcome Email
     * @param \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function getWebsitesWelcomeEmail(
        \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->getWebsitesWelcomeEmailRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Resend Website Welcome Email
     * @param \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function getWebsitesWelcomeEmailResult(
        \App\DTO\GetWebsitesWelcomeEmailParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->getWebsitesWelcomeEmail($parameters, $security, $responseMediaType));
    }
    //endregion

    //region gettWebsiteReverseDns
    /**
     * Get Website Reverse DNS
     * @param \App\DTO\GettWebsiteReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function gettWebsiteReverseDnsRaw(
        \App\DTO\GettWebsiteReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/websites/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get Website Reverse DNS
     * @param \App\DTO\GettWebsiteReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function gettWebsiteReverseDns(
        \App\DTO\GettWebsiteReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->gettWebsiteReverseDnsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* List of reverse dns entries */
                $responseContent = new \App\DTO\ReverseDnsEntries();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get Website Reverse DNS
     * @param \App\DTO\GettWebsiteReverseDnsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ReverseDnsEntries
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function gettWebsiteReverseDnsResult(
        \App\DTO\GettWebsiteReverseDnsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ReverseDnsEntries
    {
        return $this->getSuccessfulContent(...$this->gettWebsiteReverseDns($parameters, $security, $responseMediaType));
    }
    //endregion

    //region initiatePayment
    /**
     * Initiate Payment
     * @param \App\DTO\InitiatePaymentParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function initiatePaymentRaw(
        \App\DTO\InitiatePaymentParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/pay/{method}/{invoices}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Initiate Payment
     * @param \App\DTO\InitiatePaymentParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function initiatePayment(
        \App\DTO\InitiatePaymentParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->initiatePaymentRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Payment initiation response with redirect or form data. */
                $responseContent = new \App\DTO\InitiatePayment200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Initiate Payment
     * @param \App\DTO\InitiatePaymentParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\InitiatePayment200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function initiatePaymentResult(
        \App\DTO\InitiatePaymentParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\InitiatePayment200Response
    {
        return $this->getSuccessfulContent(...$this->initiatePayment($parameters, $security, $responseMediaType));
    }
    //endregion

    //region licensesCancel
    /**
     * Cancel License
     * @param \App\DTO\LicensesCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function licensesCancelRaw(
        \App\DTO\LicensesCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/licenses/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel License
     * @param \App\DTO\LicensesCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function licensesCancel(
        \App\DTO\LicensesCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->licensesCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* License Cancel */
                $responseContent = new \App\DTO\LicensesCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel License
     * @param \App\DTO\LicensesCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\LicensesCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function licensesCancelResult(
        \App\DTO\LicensesCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\LicensesCancel200Response
    {
        return $this->getSuccessfulContent(...$this->licensesCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region logout
    /**
     * Log Out
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function logoutRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/logout', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Log Out
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function logout(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->logoutRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Log Out
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function logoutResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->logout($security, $responseMediaType));
    }
    //endregion

    //region logoutAccountOauth
    /**
     * Logout of OAuth
     * @param \App\DTO\LogoutAccountOauthParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function logoutAccountOauthRaw(
        \App\DTO\LogoutAccountOauthParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/account/oauth/{name}/logout', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Logout of OAuth
     * @param \App\DTO\LogoutAccountOauthParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function logoutAccountOauth(
        \App\DTO\LogoutAccountOauthParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->logoutAccountOauthRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Logout of OAuth
     * @param \App\DTO\LogoutAccountOauthParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function logoutAccountOauthResult(
        \App\DTO\LogoutAccountOauthParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->logoutAccountOauth($parameters, $security, $responseMediaType));
    }
    //endregion

    //region mailCancel
    /**
     * Cancel Mail
     * @param \App\DTO\MailCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function mailCancelRaw(
        \App\DTO\MailCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/mail/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Mail
     * @param \App\DTO\MailCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function mailCancel(
        \App\DTO\MailCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->mailCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Mail Cancel */
                $responseContent = new \App\DTO\MailCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Mail
     * @param \App\DTO\MailCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function mailCancelResult(
        \App\DTO\MailCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailCancel200Response
    {
        return $this->getSuccessfulContent(...$this->mailCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region patchDomains
    /**
     * Validate Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function patchDomainsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PATCH', '/domains/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function patchDomains(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->patchDomainsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Domain order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Domain Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function patchDomainsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->patchDomains($security, $responseMediaType));
    }
    //endregion

    //region patchOauthTwoFactor
    /**
     * Complete OAuth Two-Factor Verification
     * @param \App\DTO\PatchOauthTwoFactorRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function patchOauthTwoFactorRaw(
        \App\DTO\PatchOauthTwoFactorRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PATCH', '/oauth', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Complete OAuth Two-Factor Verification
     * @param \App\DTO\PatchOauthTwoFactorRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function patchOauthTwoFactor(
        \App\DTO\PatchOauthTwoFactorRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->patchOauthTwoFactorRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* OAuth 2FA verification result. */
                $responseContent = new \App\DTO\PatchOauthTwoFactor200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Complete OAuth Two-Factor Verification
     * @param \App\DTO\PatchOauthTwoFactorRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\PatchOauthTwoFactor200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function patchOauthTwoFactorResult(
        \App\DTO\PatchOauthTwoFactorRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\PatchOauthTwoFactor200Response
    {
        return $this->getSuccessfulContent(...$this->patchOauthTwoFactor($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region pingServer
    /**
     * Ping Server
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function pingServerRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/ping', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Ping Server
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function pingServer(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->pingServerRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A simple response of \"pong\" for use with simple tests to see if a service is up. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Something is wrong */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Ping Server
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return string
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function pingServerResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): string
    {
        return $this->getSuccessfulContent(...$this->pingServer($security, $responseMediaType));
    }
    //endregion

    //region placeBuyNowServer
    /**
     * Place Buy Now Server Order
     * @param \App\DTO\PlaceBuyNowServerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function placeBuyNowServerRaw(
        \App\DTO\PlaceBuyNowServerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/order/buy_now_server', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Buy Now Server Order
     * @param \App\DTO\PlaceBuyNowServerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function placeBuyNowServer(
        \App\DTO\PlaceBuyNowServerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->placeBuyNowServerRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Order placed successfully. */
                $responseContent = new \App\DTO\ServersBuyNowResponse();
                break;
            case 400:
                /* Order validation failed. */
                $responseContent = new \App\DTO\ServersBuyNowError();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Buy Now Server Order
     * @param \App\DTO\PlaceBuyNowServerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\ServersBuyNowResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function placeBuyNowServerResult(
        \App\DTO\PlaceBuyNowServerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServersBuyNowResponse
    {
        return $this->getSuccessfulContent(...$this->placeBuyNowServer($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region placeScrubOrder
    /**
     * Place Scrub IP Order
     * @param \App\DTO\ScrubIpPlaceOrder $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function placeScrubOrderRaw(
        \App\DTO\ScrubIpPlaceOrder $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/order', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Place Scrub IP Order
     * @param \App\DTO\ScrubIpPlaceOrder $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function placeScrubOrder(
        \App\DTO\ScrubIpPlaceOrder $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->placeScrubOrderRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 201:
                /* Request OK */
                $responseContent = new \App\DTO\PlaceScrubOrder201Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Place Scrub IP Order
     * @param \App\DTO\ScrubIpPlaceOrder $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\PlaceScrubOrder201Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function placeScrubOrderResult(
        \App\DTO\ScrubIpPlaceOrder $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\PlaceScrubOrder201Response
    {
        return $this->getSuccessfulContent(...$this->placeScrubOrder($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postBillingCreditCardVerify
    /**
     * Submit Credit Card Verification
     * @param \App\DTO\PostBillingCreditCardVerifyParameterData $parameters
     * @param \App\DTO\BillingVerifyCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postBillingCreditCardVerifyRaw(
        \App\DTO\PostBillingCreditCardVerifyParameterData $parameters,
        \App\DTO\BillingVerifyCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/billing/creditcards/{id}/verify', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Submit Credit Card Verification
     * @param \App\DTO\PostBillingCreditCardVerifyParameterData $parameters
     * @param \App\DTO\BillingVerifyCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postBillingCreditCardVerify(
        \App\DTO\PostBillingCreditCardVerifyParameterData $parameters,
        \App\DTO\BillingVerifyCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postBillingCreditCardVerifyRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Submit Credit Card Verification
     * @param \App\DTO\PostBillingCreditCardVerifyParameterData $parameters
     * @param \App\DTO\BillingVerifyCcRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postBillingCreditCardVerifyResult(
        \App\DTO\PostBillingCreditCardVerifyParameterData $parameters,
        \App\DTO\BillingVerifyCcRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postBillingCreditCardVerify($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postDomainRenewal
    /**
     * Request Domain Renewal
     * @param \App\DTO\PostDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postDomainRenewalRaw(
        \App\DTO\PostDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/renew', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Request Domain Renewal
     * @param \App\DTO\PostDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postDomainRenewal(
        \App\DTO\PostDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postDomainRenewalRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Request Domain Renewal
     * @param \App\DTO\PostDomainRenewalParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postDomainRenewalResult(
        \App\DTO\PostDomainRenewalParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postDomainRenewal($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postDomainTransfer
    /**
     * Request Domain Transfer
     * @param \App\DTO\PostDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postDomainTransferRaw(
        \App\DTO\PostDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/transfer', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Request Domain Transfer
     * @param \App\DTO\PostDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postDomainTransfer(
        \App\DTO\PostDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postDomainTransferRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Request Domain Transfer
     * @param \App\DTO\PostDomainTransferParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postDomainTransferResult(
        \App\DTO\PostDomainTransferParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postDomainTransfer($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postFloatingIpsChangeIp
    /**
     * Change Floating IP Target
     * @param \App\DTO\PostFloatingIpsChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postFloatingIpsChangeIpRaw(
        \App\DTO\PostFloatingIpsChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/floating_ips/{id}/change_ip', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Floating IP Target
     * @param \App\DTO\PostFloatingIpsChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postFloatingIpsChangeIp(
        \App\DTO\PostFloatingIpsChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postFloatingIpsChangeIpRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Floating IP Target
     * @param \App\DTO\PostFloatingIpsChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postFloatingIpsChangeIpResult(
        \App\DTO\PostFloatingIpsChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postFloatingIpsChangeIp($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postLicenseChangeIp
    /**
     * Change License IP
     * @param \App\DTO\PostLicenseChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postLicenseChangeIpRaw(
        \App\DTO\PostLicenseChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/licenses/{id}/change_ip', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change License IP
     * @param \App\DTO\PostLicenseChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postLicenseChangeIp(
        \App\DTO\PostLicenseChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postLicenseChangeIpRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change License IP
     * @param \App\DTO\PostLicenseChangeIpParameterData $parameters
     * @param \App\DTO\IpObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postLicenseChangeIpResult(
        \App\DTO\PostLicenseChangeIpParameterData $parameters,
        \App\DTO\IpObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postLicenseChangeIp($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postMailDelist
    /**
     * Delist a Blocked Sender
     * @param \App\DTO\PostMailDelistParameterData $parameters
     * @param \App\DTO\MailDelistRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postMailDelistRaw(
        \App\DTO\PostMailDelistParameterData $parameters,
        \App\DTO\MailDelistRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/delist', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delist a Blocked Sender
     * @param \App\DTO\PostMailDelistParameterData $parameters
     * @param \App\DTO\MailDelistRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postMailDelist(
        \App\DTO\PostMailDelistParameterData $parameters,
        \App\DTO\MailDelistRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postMailDelistRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delist a Blocked Sender
     * @param \App\DTO\PostMailDelistParameterData $parameters
     * @param \App\DTO\MailDelistRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postMailDelistResult(
        \App\DTO\PostMailDelistParameterData $parameters,
        \App\DTO\MailDelistRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->postMailDelist($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postOauthCallback
    /**
     * OAuth Callback
     * @param \App\DTO\PostOauthCallbackParameterData $parameters
     * @param \App\DTO\PostOauthCallbackRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postOauthCallbackRaw(
        \App\DTO\PostOauthCallbackParameterData $parameters,
        \App\DTO\PostOauthCallbackRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/oauth', [], $this->getQueryParameters($parameters));
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * OAuth Callback
     * @param \App\DTO\PostOauthCallbackParameterData $parameters
     * @param \App\DTO\PostOauthCallbackRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postOauthCallback(
        \App\DTO\PostOauthCallbackParameterData $parameters,
        \App\DTO\PostOauthCallbackRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postOauthCallbackRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* OAuth callback result. */
                $responseContent = new \App\DTO\PostOauthCallback200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * OAuth Callback
     * @param \App\DTO\PostOauthCallbackParameterData $parameters
     * @param \App\DTO\PostOauthCallbackRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\PostOauthCallback200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postOauthCallbackResult(
        \App\DTO\PostOauthCallbackParameterData $parameters,
        \App\DTO\PostOauthCallbackRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\PostOauthCallback200Response
    {
        return $this->getSuccessfulContent(...$this->postOauthCallback($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postQsBackup
    /**
     * Create QuickServer Backup
     * @param \App\DTO\PostQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsBackupRaw(
        \App\DTO\PostQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/backup', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Create QuickServer Backup
     * @param \App\DTO\PostQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsBackup(
        \App\DTO\PostQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsBackupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Create QuickServer Backup
     * @param \App\DTO\PostQsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsBackupResult(
        \App\DTO\PostQsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsBackup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsChangeHostname
    /**
     * Update QuickServer Hostname
     * @param \App\DTO\PostQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsChangeHostnameRaw(
        \App\DTO\PostQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/change_hostname', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update QuickServer Hostname
     * @param \App\DTO\PostQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsChangeHostname(
        \App\DTO\PostQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsChangeHostnameRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update QuickServer Hostname
     * @param \App\DTO\PostQsChangeHostnameParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsChangeHostnameResult(
        \App\DTO\PostQsChangeHostnameParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsChangeHostname($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsChangeRootPassword
    /**
     * Change Root Password
     * @param \App\DTO\PostQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsChangeRootPasswordRaw(
        \App\DTO\PostQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/change_root_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Root Password
     * @param \App\DTO\PostQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsChangeRootPassword(
        \App\DTO\PostQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsChangeRootPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Root Password
     * @param \App\DTO\PostQsChangeRootPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsChangeRootPasswordResult(
        \App\DTO\PostQsChangeRootPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsChangeRootPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsChangeTimezone
    /**
     * Change QuickServer Timezone
     * @param \App\DTO\PostQsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsChangeTimezoneRaw(
        \App\DTO\PostQsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/change_timezone', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change QuickServer Timezone
     * @param \App\DTO\PostQsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsChangeTimezone(
        \App\DTO\PostQsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsChangeTimezoneRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change QuickServer Timezone
     * @param \App\DTO\PostQsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsChangeTimezoneResult(
        \App\DTO\PostQsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsChangeTimezone($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postQsChangeWebuzoPassword
    /**
     * Change Webuzo Password
     * @param \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsChangeWebuzoPasswordRaw(
        \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/change_webuzo_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Webuzo Password
     * @param \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsChangeWebuzoPassword(
        \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsChangeWebuzoPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Webuzo Password
     * @param \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsChangeWebuzoPasswordResult(
        \App\DTO\PostQsChangeWebuzoPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsChangeWebuzoPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsInsertCd
    /**
     * Insert CD in QuickServer
     * @param \App\DTO\PostQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsInsertCdRaw(
        \App\DTO\PostQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/insert_cd', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Insert CD in QuickServer
     * @param \App\DTO\PostQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsInsertCd(
        \App\DTO\PostQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsInsertCdRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Insert CD in QuickServer
     * @param \App\DTO\PostQsInsertCdParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsInsertCdResult(
        \App\DTO\PostQsInsertCdParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsInsertCd($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsReinstallOs
    /**
     * Reinstall QuickServer OS
     * @param \App\DTO\PostQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsReinstallOsRaw(
        \App\DTO\PostQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/reinstall_os', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reinstall QuickServer OS
     * @param \App\DTO\PostQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsReinstallOs(
        \App\DTO\PostQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsReinstallOsRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reinstall QuickServer OS
     * @param \App\DTO\PostQsReinstallOsParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsReinstallOsResult(
        \App\DTO\PostQsReinstallOsParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsReinstallOs($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsResetPassword
    /**
     * Reset QuickServer Password
     * @param \App\DTO\PostQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsResetPasswordRaw(
        \App\DTO\PostQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/reset_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reset QuickServer Password
     * @param \App\DTO\PostQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsResetPassword(
        \App\DTO\PostQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsResetPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reset QuickServer Password
     * @param \App\DTO\PostQsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsResetPasswordResult(
        \App\DTO\PostQsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsResetPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsReverseDns
    /**
     * Update Reverse DNS
     * @param \App\DTO\PostQsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsReverseDnsRaw(
        \App\DTO\PostQsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostQsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsReverseDns(
        \App\DTO\PostQsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsReverseDnsRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Update QuickServer Reverse DNS response */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostQsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsReverseDnsResult(
        \App\DTO\PostQsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->postQsReverseDns($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postQsSetupVnc
    /**
     * Setup VNC
     * @param \App\DTO\PostQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsSetupVncRaw(
        \App\DTO\PostQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/setup_vnc', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Setup VNC
     * @param \App\DTO\PostQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsSetupVnc(
        \App\DTO\PostQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsSetupVncRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Setup VNC
     * @param \App\DTO\PostQsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsSetupVncResult(
        \App\DTO\PostQsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQsSetupVnc($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsTrafficUsage
    /**
     * Search Traffic Usage
     * @param \App\DTO\PostQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsTrafficUsageRaw(
        \App\DTO\PostQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/traffic_usage', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Search Traffic Usage
     * @param \App\DTO\PostQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsTrafficUsage(
        \App\DTO\PostQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsTrafficUsageRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Submit QuickServer Traffic Usage */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Search Traffic Usage
     * @param \App\DTO\PostQsTrafficUsageParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsTrafficUsageResult(
        \App\DTO\PostQsTrafficUsageParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postQsTrafficUsage($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQsViewDesktop
    /**
     * Update View Desktop
     * @param \App\DTO\PostQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQsViewDesktopRaw(
        \App\DTO\PostQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/view_desktop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update View Desktop
     * @param \App\DTO\PostQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQsViewDesktop(
        \App\DTO\PostQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQsViewDesktopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Submit QuickServer View Desktop Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update View Desktop
     * @param \App\DTO\PostQsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQsViewDesktopResult(
        \App\DTO\PostQsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postQsViewDesktop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postQuickServerRestore
    /**
     * Restore QuickServer from Backup
     * @param \App\DTO\PostQuickServerRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postQuickServerRestoreRaw(
        \App\DTO\PostQuickServerRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}/restore', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Restore QuickServer from Backup
     * @param \App\DTO\PostQuickServerRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postQuickServerRestore(
        \App\DTO\PostQuickServerRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postQuickServerRestoreRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 400:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Restore QuickServer from Backup
     * @param \App\DTO\PostQuickServerRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postQuickServerRestoreResult(
        \App\DTO\PostQuickServerRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postQuickServerRestore($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postServerReverseDns
    /**
     * Update Reverse DNS
     * @param \App\DTO\PostServerReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postServerReverseDnsRaw(
        \App\DTO\PostServerReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostServerReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postServerReverseDns(
        \App\DTO\PostServerReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postServerReverseDnsRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Update Server Reverse DNS response */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostServerReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postServerReverseDnsResult(
        \App\DTO\PostServerReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->postServerReverseDns($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postTicketInfo
    /**
     * Reply To Ticket
     * @param \App\DTO\PostTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postTicketInfoRaw(
        \App\DTO\PostTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/tickets/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reply To Ticket
     * @param \App\DTO\PostTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postTicketInfo(
        \App\DTO\PostTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postTicketInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Ticket Information */
                $responseContent = new \App\DTO\ViewTicketResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reply To Ticket
     * @param \App\DTO\PostTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ViewTicketResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postTicketInfoResult(
        \App\DTO\PostTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ViewTicketResponse
    {
        return $this->getSuccessfulContent(...$this->postTicketInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postTicketsList
    /**
     * Search Support Tickets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postTicketsListRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/tickets', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Search Support Tickets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postTicketsList(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postTicketsListRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Search through the ticket system for a given email, subject, or ticket mask id. */
                $responseContent = new \App\DTO\Tickets();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Search Support Tickets
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\Tickets
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postTicketsListResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\Tickets
    {
        return $this->getSuccessfulContent(...$this->postTicketsList($security, $responseMediaType));
    }
    //endregion

    //region postVpsBackup
    /**
     * Start a VPS Backup
     * @param \App\DTO\PostVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsBackupRaw(
        \App\DTO\PostVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/vps/{id}/backup', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Start a VPS Backup
     * @param \App\DTO\PostVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsBackup(
        \App\DTO\PostVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsBackupRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Start a VPS Backup
     * @param \App\DTO\PostVpsBackupParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsBackupResult(
        \App\DTO\PostVpsBackupParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsBackup($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsBuyHdSpace
    /**
     * Purchase HD Space Addon
     * @param \App\DTO\PostVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsBuyHdSpaceRaw(
        \App\DTO\PostVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/buy_hd_space', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Purchase HD Space Addon
     * @param \App\DTO\PostVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsBuyHdSpace(
        \App\DTO\PostVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsBuyHdSpaceRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Post Buy HD Space for VPS response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Purchase HD Space Addon
     * @param \App\DTO\PostVpsBuyHdSpaceParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsBuyHdSpaceResult(
        \App\DTO\PostVpsBuyHdSpaceParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postVpsBuyHdSpace($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsBuyIp
    /**
     * Purchase Additional IP
     * @param \App\DTO\PostVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsBuyIpRaw(
        \App\DTO\PostVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/buy_ip', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Purchase Additional IP
     * @param \App\DTO\PostVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsBuyIp(
        \App\DTO\PostVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsBuyIpRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Submit VPS Buy IP form response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Purchase Additional IP
     * @param \App\DTO\PostVpsBuyIpParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsBuyIpResult(
        \App\DTO\PostVpsBuyIpParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postVpsBuyIp($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsChangeHostname
    /**
     * Update VPS Hostname
     * @param \App\DTO\PostVpsChangeHostnameParameterData $parameters
     * @param \App\DTO\HostnameObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsChangeHostnameRaw(
        \App\DTO\PostVpsChangeHostnameParameterData $parameters,
        \App\DTO\HostnameObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/change_hostname', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update VPS Hostname
     * @param \App\DTO\PostVpsChangeHostnameParameterData $parameters
     * @param \App\DTO\HostnameObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsChangeHostname(
        \App\DTO\PostVpsChangeHostnameParameterData $parameters,
        \App\DTO\HostnameObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsChangeHostnameRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update VPS Hostname
     * @param \App\DTO\PostVpsChangeHostnameParameterData $parameters
     * @param \App\DTO\HostnameObject $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsChangeHostnameResult(
        \App\DTO\PostVpsChangeHostnameParameterData $parameters,
        \App\DTO\HostnameObject $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsChangeHostname($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsChangeRootPassword
    /**
     * Change VPS Root Password
     * @param \App\DTO\PostVpsChangeRootPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsChangeRootPasswordRaw(
        \App\DTO\PostVpsChangeRootPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/change_root_password', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change VPS Root Password
     * @param \App\DTO\PostVpsChangeRootPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsChangeRootPassword(
        \App\DTO\PostVpsChangeRootPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsChangeRootPasswordRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change VPS Root Password
     * @param \App\DTO\PostVpsChangeRootPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsChangeRootPasswordResult(
        \App\DTO\PostVpsChangeRootPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsChangeRootPassword($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsChangeTimezone
    /**
     * Change VPS Timezone
     * @param \App\DTO\PostVpsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsChangeTimezoneRaw(
        \App\DTO\PostVpsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/change_timezone', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change VPS Timezone
     * @param \App\DTO\PostVpsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsChangeTimezone(
        \App\DTO\PostVpsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsChangeTimezoneRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change VPS Timezone
     * @param \App\DTO\PostVpsChangeTimezoneParameterData $parameters
     * @param \App\DTO\TimezoneUpdate $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsChangeTimezoneResult(
        \App\DTO\PostVpsChangeTimezoneParameterData $parameters,
        \App\DTO\TimezoneUpdate $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsChangeTimezone($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsChangeWebuzoPassword
    /**
     * Change Webuzo Password
     * @param \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsChangeWebuzoPasswordRaw(
        \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/change_webuzo_password', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Webuzo Password
     * @param \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsChangeWebuzoPassword(
        \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsChangeWebuzoPasswordRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Webuzo Password
     * @param \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsChangeWebuzoPasswordResult(
        \App\DTO\PostVpsChangeWebuzoPasswordParameterData $parameters,
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsChangeWebuzoPassword($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsInsertCd
    /**
     * Insert CD in VPS
     * @param \App\DTO\PostVpsInsertCdParameterData $parameters
     * @param \App\DTO\UrlRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsInsertCdRaw(
        \App\DTO\PostVpsInsertCdParameterData $parameters,
        \App\DTO\UrlRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/insert_cd', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Insert CD in VPS
     * @param \App\DTO\PostVpsInsertCdParameterData $parameters
     * @param \App\DTO\UrlRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsInsertCd(
        \App\DTO\PostVpsInsertCdParameterData $parameters,
        \App\DTO\UrlRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsInsertCdRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Insert CD in VPS
     * @param \App\DTO\PostVpsInsertCdParameterData $parameters
     * @param \App\DTO\UrlRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsInsertCdResult(
        \App\DTO\PostVpsInsertCdParameterData $parameters,
        \App\DTO\UrlRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsInsertCd($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsReinstallOs
    /**
     * Reinstall VPS OS
     * @param \App\DTO\PostVpsReinstallOsParameterData $parameters
     * @param \App\DTO\TemplateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsReinstallOsRaw(
        \App\DTO\PostVpsReinstallOsParameterData $parameters,
        \App\DTO\TemplateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/reinstall_os', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reinstall VPS OS
     * @param \App\DTO\PostVpsReinstallOsParameterData $parameters
     * @param \App\DTO\TemplateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsReinstallOs(
        \App\DTO\PostVpsReinstallOsParameterData $parameters,
        \App\DTO\TemplateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsReinstallOsRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reinstall VPS OS
     * @param \App\DTO\PostVpsReinstallOsParameterData $parameters
     * @param \App\DTO\TemplateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsReinstallOsResult(
        \App\DTO\PostVpsReinstallOsParameterData $parameters,
        \App\DTO\TemplateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsReinstallOs($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsResetPassword
    /**
     * Reset VPS Password
     * @param \App\DTO\PostVpsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsResetPasswordRaw(
        \App\DTO\PostVpsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/reset_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reset VPS Password
     * @param \App\DTO\PostVpsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsResetPassword(
        \App\DTO\PostVpsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsResetPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reset VPS Password
     * @param \App\DTO\PostVpsResetPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsResetPasswordResult(
        \App\DTO\PostVpsResetPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsResetPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsRestore
    /**
     * Restore VPS from Backup
     * @param \App\DTO\PostVpsRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsRestoreRaw(
        \App\DTO\PostVpsRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/restore', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Restore VPS from Backup
     * @param \App\DTO\PostVpsRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsRestore(
        \App\DTO\PostVpsRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsRestoreRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 400:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Restore VPS from Backup
     * @param \App\DTO\PostVpsRestoreParameterData $parameters
     * @param \App\DTO\RestoreRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsRestoreResult(
        \App\DTO\PostVpsRestoreParameterData $parameters,
        \App\DTO\RestoreRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsRestore($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsReverseDns
    /**
     * Update Reverse DNS
     * @param \App\DTO\PostVpsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsReverseDnsRaw(
        \App\DTO\PostVpsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostVpsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsReverseDns(
        \App\DTO\PostVpsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsReverseDnsRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Update VPS Reverse DNS response */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Reverse DNS
     * @param \App\DTO\PostVpsReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsReverseDnsResult(
        \App\DTO\PostVpsReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsReverseDns($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postVpsSetupVnc
    /**
     * Setup VNC
     * @param \App\DTO\PostVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsSetupVncRaw(
        \App\DTO\PostVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/setup_vnc', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Setup VNC
     * @param \App\DTO\PostVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsSetupVnc(
        \App\DTO\PostVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsSetupVncRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response message from sending a service queue. */
                $responseContent = new \App\DTO\QueueResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Setup VNC
     * @param \App\DTO\PostVpsSetupVncParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QueueResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsSetupVncResult(
        \App\DTO\PostVpsSetupVncParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QueueResponse
    {
        return $this->getSuccessfulContent(...$this->postVpsSetupVnc($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsSlices
    /**
     * Purchase Slice Upgrade
     * @param \App\DTO\PostVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsSlicesRaw(
        \App\DTO\PostVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/slices', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Purchase Slice Upgrade
     * @param \App\DTO\PostVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsSlices(
        \App\DTO\PostVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsSlicesRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Update VPS slices response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Purchase Slice Upgrade
     * @param \App\DTO\PostVpsSlicesParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsSlicesResult(
        \App\DTO\PostVpsSlicesParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postVpsSlices($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postVpsViewDesktop
    /**
     * Update View Desktop
     * @param \App\DTO\PostVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postVpsViewDesktopRaw(
        \App\DTO\PostVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}/view_desktop', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update View Desktop
     * @param \App\DTO\PostVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postVpsViewDesktop(
        \App\DTO\PostVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postVpsViewDesktopRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Submit VPS View Desktop Information */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update View Desktop
     * @param \App\DTO\PostVpsViewDesktopParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postVpsViewDesktopResult(
        \App\DTO\PostVpsViewDesktopParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->postVpsViewDesktop($parameters, $security, $responseMediaType));
    }
    //endregion

    //region postWebsiteBuyIp
    /**
     * Update Website IP DNS
     * @param \App\DTO\PostWebsiteBuyIpParameterData $parameters
     * @param \App\DTO\PostWebsiteBuyIpRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postWebsiteBuyIpRaw(
        \App\DTO\PostWebsiteBuyIpParameterData $parameters,
        \App\DTO\PostWebsiteBuyIpRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/websites/{id}/buy_ip', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Website IP DNS
     * @param \App\DTO\PostWebsiteBuyIpParameterData $parameters
     * @param \App\DTO\PostWebsiteBuyIpRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postWebsiteBuyIp(
        \App\DTO\PostWebsiteBuyIpParameterData $parameters,
        \App\DTO\PostWebsiteBuyIpRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postWebsiteBuyIpRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* DNS update result. */
                $responseContent = new \App\DTO\PostWebsiteBuyIp200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Website IP DNS
     * @param \App\DTO\PostWebsiteBuyIpParameterData $parameters
     * @param \App\DTO\PostWebsiteBuyIpRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\PostWebsiteBuyIp200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postWebsiteBuyIpResult(
        \App\DTO\PostWebsiteBuyIpParameterData $parameters,
        \App\DTO\PostWebsiteBuyIpRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\PostWebsiteBuyIp200Response
    {
        return $this->getSuccessfulContent(...$this->postWebsiteBuyIp($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postWebsiteMigration
    /**
     * Request Website Migration
     * @param \App\DTO\PostWebsiteMigrationParameterData $parameters
     * @param \App\DTO\PostWebsiteMigrationRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postWebsiteMigrationRaw(
        \App\DTO\PostWebsiteMigrationParameterData $parameters,
        \App\DTO\PostWebsiteMigrationRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/websites/{id}/migration', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Request Website Migration
     * @param \App\DTO\PostWebsiteMigrationParameterData $parameters
     * @param \App\DTO\PostWebsiteMigrationRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postWebsiteMigration(
        \App\DTO\PostWebsiteMigrationParameterData $parameters,
        \App\DTO\PostWebsiteMigrationRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postWebsiteMigrationRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Migration request submitted. */
                $responseContent = new \App\DTO\PostWebsiteMigration200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Request Website Migration
     * @param \App\DTO\PostWebsiteMigrationParameterData $parameters
     * @param \App\DTO\PostWebsiteMigrationRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\PostWebsiteMigration200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postWebsiteMigrationResult(
        \App\DTO\PostWebsiteMigrationParameterData $parameters,
        \App\DTO\PostWebsiteMigrationRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\PostWebsiteMigration200Response
    {
        return $this->getSuccessfulContent(...$this->postWebsiteMigration($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region postWebsitesReverseDns
    /**
     * Update Website Reverse DNS
     * @param \App\DTO\PostWebsitesReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function postWebsitesReverseDnsRaw(
        \App\DTO\PostWebsitesReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/websites/{id}/reverse_dns', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Website Reverse DNS
     * @param \App\DTO\PostWebsitesReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function postWebsitesReverseDns(
        \App\DTO\PostWebsitesReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->postWebsitesReverseDnsRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response from the update reverse DNS call. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Website Reverse DNS
     * @param \App\DTO\PostWebsitesReverseDnsParameterData $parameters
     * @param \App\DTO\ReverseDnsEntries $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function postWebsitesReverseDnsResult(
        \App\DTO\PostWebsitesReverseDnsParameterData $parameters,
        \App\DTO\ReverseDnsEntries $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->postWebsitesReverseDns($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region putDomains
    /**
     * Domain Order Search
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putDomainsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/domains/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Domain Order Search
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putDomains(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putDomainsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Domain Order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Domain Order Search
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putDomainsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putDomains($security, $responseMediaType));
    }
    //endregion

    //region putFloatingIps
    /**
     * Validate Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putFloatingIpsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/floating_ips/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putFloatingIps(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putFloatingIpsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Floating IPs order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Floating IP Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putFloatingIpsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putFloatingIps($security, $responseMediaType));
    }
    //endregion

    //region putLicenses
    /**
     * Validate License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putLicensesRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/licenses/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putLicenses(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putLicensesRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Licenses order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate License Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putLicensesResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putLicenses($security, $responseMediaType));
    }
    //endregion

    //region putMail
    /**
     * Validate Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putMailRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/mail/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putMail(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putMailRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Mail order response. */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Mail Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putMailResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putMail($security, $responseMediaType));
    }
    //endregion

    //region putQs
    /**
     * Validate QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putQsRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/qs/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putQs(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putQsRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate QuickServer Order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate QuickServer Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putQsResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putQs($security, $responseMediaType));
    }
    //endregion

    //region putServers
    /**
     * Validate Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putServersRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/servers/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putServers(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putServersRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Server order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Server Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putServersResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putServers($security, $responseMediaType));
    }
    //endregion

    //region putSsl
    /**
     * Validate SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putSslRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/ssl/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putSsl(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putSslRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate SSL Order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate SSL Cert Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putSslResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putSsl($security, $responseMediaType));
    }
    //endregion

    //region putTicketInfo
    /**
     * Update Ticket
     * @param \App\DTO\PutTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putTicketInfoRaw(
        \App\DTO\PutTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/tickets/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Ticket
     * @param \App\DTO\PutTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putTicketInfo(
        \App\DTO\PutTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putTicketInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Ticket Information */
                $responseContent = new \App\DTO\ViewTicketResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Ticket
     * @param \App\DTO\PutTicketInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ViewTicketResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putTicketInfoResult(
        \App\DTO\PutTicketInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ViewTicketResponse
    {
        return $this->getSuccessfulContent(...$this->putTicketInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region putVps
    /**
     * Validate VPS Order
     * @param \App\DTO\VpsOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putVpsRaw(
        \App\DTO\VpsOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/vps/order', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate VPS Order
     * @param \App\DTO\VpsOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putVps(
        \App\DTO\VpsOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putVpsRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate VPS order response. */
                $responseContent = new \App\DTO\VpsOrderPutResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate VPS Order
     * @param \App\DTO\VpsOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\VpsOrderPutResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putVpsResult(
        \App\DTO\VpsOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\VpsOrderPutResponse
    {
        return $this->getSuccessfulContent(...$this->putVps($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region putWebsites
    /**
     * Validate Webhosting Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function putWebsitesRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/websites/order', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Webhosting Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function putWebsites(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->putWebsitesRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Website order response */
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Webhosting Order
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function putWebsitesResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->putWebsites($security, $responseMediaType));
    }
    //endregion

    //region quickserversCancel
    /**
     * Cancel QuickServer Order
     * @param \App\DTO\QuickserversCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function quickserversCancelRaw(
        \App\DTO\QuickserversCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/qs/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel QuickServer Order
     * @param \App\DTO\QuickserversCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function quickserversCancel(
        \App\DTO\QuickserversCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->quickserversCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Rapid Deploy Servers Cancel */
                $responseContent = new \App\DTO\QuickserversCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel QuickServer Order
     * @param \App\DTO\QuickserversCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\QuickserversCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function quickserversCancelResult(
        \App\DTO\QuickserversCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\QuickserversCancel200Response
    {
        return $this->getSuccessfulContent(...$this->quickserversCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region replyTicket
    /**
     * Reply Ticket
     * @param \App\DTO\ReplyTicketParameterData $parameters
     * @param \App\DTO\ReplyTicketRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function replyTicketRaw(
        \App\DTO\ReplyTicketParameterData $parameters,
        \App\DTO\ReplyTicketRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/tickets/{id}/reply', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reply Ticket
     * @param \App\DTO\ReplyTicketParameterData $parameters
     * @param \App\DTO\ReplyTicketRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function replyTicket(
        \App\DTO\ReplyTicketParameterData $parameters,
        \App\DTO\ReplyTicketRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->replyTicketRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Post Reply to the ticket. */
                $responseContent = new \App\DTO\ReplyTicketResponseSchema();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reply Ticket
     * @param \App\DTO\ReplyTicketParameterData $parameters
     * @param \App\DTO\ReplyTicketRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\ReplyTicketResponseSchema
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function replyTicketResult(
        \App\DTO\ReplyTicketParameterData $parameters,
        \App\DTO\ReplyTicketRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\ReplyTicketResponseSchema
    {
        return $this->getSuccessfulContent(...$this->replyTicket($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region resetMailPassword
    /**
     * Reset Mail Password
     * @param \App\DTO\ResetMailPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function resetMailPasswordRaw(
        \App\DTO\ResetMailPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/reset_password', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Reset Mail Password
     * @param \App\DTO\ResetMailPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function resetMailPassword(
        \App\DTO\ResetMailPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->resetMailPasswordRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Reset Mail Password
     * @param \App\DTO\ResetMailPasswordParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function resetMailPasswordResult(
        \App\DTO\ResetMailPasswordParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->resetMailPassword($parameters, $security, $responseMediaType));
    }
    //endregion

    //region scrubIpsDeleteGeoRule
    /**
     * Delete Geo Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters
     * @param \App\DTO\DeleteGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function scrubIpsDeleteGeoRuleRaw(
        \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters,
        \App\DTO\DeleteGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/delete_geo_rule', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Geo Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters
     * @param \App\DTO\DeleteGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function scrubIpsDeleteGeoRule(
        \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters,
        \App\DTO\DeleteGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->scrubIpsDeleteGeoRuleRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Delete firewall rule for scrub ip */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule200Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Geo Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters
     * @param \App\DTO\DeleteGeoFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\ScrubIpsDeleteRule200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function scrubIpsDeleteGeoRuleResult(
        \App\DTO\ScrubIpsDeleteGeoRuleParameterData $parameters,
        \App\DTO\DeleteGeoFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\ScrubIpsDeleteRule200Response
    {
        return $this->getSuccessfulContent(...$this->scrubIpsDeleteGeoRule($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region scrubIpsDeleteRule
    /**
     * Delete Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteRuleParameterData $parameters
     * @param \App\DTO\DeleteFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function scrubIpsDeleteRuleRaw(
        \App\DTO\ScrubIpsDeleteRuleParameterData $parameters,
        \App\DTO\DeleteFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/scrub_ips/{id}/delete_rule', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Delete Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteRuleParameterData $parameters
     * @param \App\DTO\DeleteFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function scrubIpsDeleteRule(
        \App\DTO\ScrubIpsDeleteRuleParameterData $parameters,
        \App\DTO\DeleteFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->scrubIpsDeleteRuleRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Delete firewall rule for scrub ip */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule200Response();
                break;
            case 400:
                /* Bad Request */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule400Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 500:
                /* Internal Server Error */
                $responseContent = new \App\DTO\ScrubIpsDeleteRule500Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Delete Firewall Rule
     * @param \App\DTO\ScrubIpsDeleteRuleParameterData $parameters
     * @param \App\DTO\DeleteFirewallRule $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\ScrubIpsDeleteRule200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function scrubIpsDeleteRuleResult(
        \App\DTO\ScrubIpsDeleteRuleParameterData $parameters,
        \App\DTO\DeleteFirewallRule $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\ScrubIpsDeleteRule200Response
    {
        return $this->getSuccessfulContent(...$this->scrubIpsDeleteRule($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region sendAdvMail
    /**
     * Send Email with Advanced Options
     * @param \App\DTO\SendAdvMailParameterData $parameters
     * @param \App\DTO\SendMailAdv $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function sendAdvMailRaw(
        \App\DTO\SendAdvMailParameterData $parameters,
        \App\DTO\SendMailAdv $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/advsend', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Send Email with Advanced Options
     * @param \App\DTO\SendAdvMailParameterData $parameters
     * @param \App\DTO\SendMailAdv $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function sendAdvMail(
        \App\DTO\SendAdvMailParameterData $parameters,
        \App\DTO\SendMailAdv $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->sendAdvMailRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Email queued successfully. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Send Email with Advanced Options
     * @param \App\DTO\SendAdvMailParameterData $parameters
     * @param \App\DTO\SendMailAdv $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function sendAdvMailResult(
        \App\DTO\SendAdvMailParameterData $parameters,
        \App\DTO\SendMailAdv $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->sendAdvMail($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region sendMail
    /**
     * Send Email
     * @param \App\DTO\SendMailParameterData $parameters
     * @param \App\DTO\SendMail $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function sendMailRaw(
        \App\DTO\SendMailParameterData $parameters,
        \App\DTO\SendMail $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}/send', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Send Email
     * @param \App\DTO\SendMailParameterData $parameters
     * @param \App\DTO\SendMail $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function sendMail(
        \App\DTO\SendMailParameterData $parameters,
        \App\DTO\SendMail $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->sendMailRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Email queued successfully. */
                $responseContent = new \App\DTO\GenericResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Send Email
     * @param \App\DTO\SendMailParameterData $parameters
     * @param \App\DTO\SendMail $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\GenericResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function sendMailResult(
        \App\DTO\SendMailParameterData $parameters,
        \App\DTO\SendMail $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\GenericResponse
    {
        return $this->getSuccessfulContent(...$this->sendMail($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region serverIpmiLiveGet
    /**
     * Server IPMI Live Information
     * @param \App\DTO\ServerIpmiLiveGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function serverIpmiLiveGetRaw(
        \App\DTO\ServerIpmiLiveGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}/ipmi_live', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Server IPMI Live Information
     * @param \App\DTO\ServerIpmiLiveGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function serverIpmiLiveGet(
        \App\DTO\ServerIpmiLiveGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->serverIpmiLiveGetRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response from the Servers IPMI Live information request. */
                $responseContent = new \App\DTO\ServerIpmiLiveInfo();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Server IPMI Live Information
     * @param \App\DTO\ServerIpmiLiveGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ServerIpmiLiveInfo
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function serverIpmiLiveGetResult(
        \App\DTO\ServerIpmiLiveGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServerIpmiLiveInfo
    {
        return $this->getSuccessfulContent(...$this->serverIpmiLiveGet($parameters, $security, $responseMediaType));
    }
    //endregion

    //region serverIpmiLivePost
    /**
     * Server IPMI Live Setup
     * @param \App\DTO\ServerIpmiLivePostParameterData $parameters
     * @param \App\DTO\ServerIpmiLiveRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function serverIpmiLivePostRaw(
        \App\DTO\ServerIpmiLivePostParameterData $parameters,
        \App\DTO\ServerIpmiLiveRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/{id}/ipmi_live', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Server IPMI Live Setup
     * @param \App\DTO\ServerIpmiLivePostParameterData $parameters
     * @param \App\DTO\ServerIpmiLiveRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function serverIpmiLivePost(
        \App\DTO\ServerIpmiLivePostParameterData $parameters,
        \App\DTO\ServerIpmiLiveRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->serverIpmiLivePostRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response from the Servers IPMI Live information request. */
                $responseContent = new \App\DTO\ServerIpmiLiveInfo();
                break;
            case 404:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Server IPMI Live Setup
     * @param \App\DTO\ServerIpmiLivePostParameterData $parameters
     * @param \App\DTO\ServerIpmiLiveRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\ServerIpmiLiveInfo
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function serverIpmiLivePostResult(
        \App\DTO\ServerIpmiLivePostParameterData $parameters,
        \App\DTO\ServerIpmiLiveRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServerIpmiLiveInfo
    {
        return $this->getSuccessfulContent(...$this->serverIpmiLivePost($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region serverIpmiPowerGet
    /**
     * Get IPMI Power Status
     * @param \App\DTO\ServerIpmiPowerGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function serverIpmiPowerGetRaw(
        \App\DTO\ServerIpmiPowerGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/servers/{id}/ipmi_power', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Get IPMI Power Status
     * @param \App\DTO\ServerIpmiPowerGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function serverIpmiPowerGet(
        \App\DTO\ServerIpmiPowerGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->serverIpmiPowerGetRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Get IPMI Power Status
     * @param \App\DTO\ServerIpmiPowerGetParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function serverIpmiPowerGetResult(
        \App\DTO\ServerIpmiPowerGetParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->serverIpmiPowerGet($parameters, $security, $responseMediaType));
    }
    //endregion

    //region serverIpmiPowerPost
    /**
     * Server IPMI Power
     * @param \App\DTO\ServerIpmiPowerPostParameterData $parameters
     * @param \App\DTO\ServerIpmiPowerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function serverIpmiPowerPostRaw(
        \App\DTO\ServerIpmiPowerPostParameterData $parameters,
        \App\DTO\ServerIpmiPowerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/{id}/ipmi_power', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Server IPMI Power
     * @param \App\DTO\ServerIpmiPowerPostParameterData $parameters
     * @param \App\DTO\ServerIpmiPowerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function serverIpmiPowerPost(
        \App\DTO\ServerIpmiPowerPostParameterData $parameters,
        \App\DTO\ServerIpmiPowerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->serverIpmiPowerPostRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 400:
                /* The specified resource was not found */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Server IPMI Power
     * @param \App\DTO\ServerIpmiPowerPostParameterData $parameters
     * @param \App\DTO\ServerIpmiPowerRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function serverIpmiPowerPostResult(
        \App\DTO\ServerIpmiPowerPostParameterData $parameters,
        \App\DTO\ServerIpmiPowerRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->serverIpmiPowerPost($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region serversCancel
    /**
     * Cancel Server Service
     * @param \App\DTO\ServersCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function serversCancelRaw(
        \App\DTO\ServersCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/servers/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Server Service
     * @param \App\DTO\ServersCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function serversCancel(
        \App\DTO\ServersCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->serversCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Servers Cancel */
                $responseContent = new \App\DTO\ServersCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Server Service
     * @param \App\DTO\ServersCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\ServersCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function serversCancelResult(
        \App\DTO\ServersCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\ServersCancel200Response
    {
        return $this->getSuccessfulContent(...$this->serversCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region sslCancel
    /**
     * Cancel SSL Certificate Service
     * @param \App\DTO\SslCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function sslCancelRaw(
        \App\DTO\SslCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/ssl/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel SSL Certificate Service
     * @param \App\DTO\SslCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function sslCancel(
        \App\DTO\SslCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->sslCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* SSL Cancel */
                $responseContent = new \App\DTO\SslCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel SSL Certificate Service
     * @param \App\DTO\SslCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SslCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function sslCancelResult(
        \App\DTO\SslCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SslCancel200Response
    {
        return $this->getSuccessfulContent(...$this->sslCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region submitLogin
    /**
     * Submit Login Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function submitLoginRaw(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/login', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Submit Login Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function submitLogin(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->submitLoginRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Successful login response containing the session token. */
                $responseContent = new \App\DTO\LoginSuccessResponse();
                break;
            case 402:
                /* Error response to a login request. */
                $responseContent = new \App\DTO\LoginErrorResponse();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Submit Login Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\LoginSuccessResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function submitLoginResult(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\LoginSuccessResponse
    {
        return $this->getSuccessfulContent(...$this->submitLogin($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region submitSignup
    /**
     * Submit Signup Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function submitSignupRaw(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/signup', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Submit Signup Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function submitSignup(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->submitSignupRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Account created successfully. */
                break;
            case 402:
                /* Error response to a login request. */
                $responseContent = new \App\DTO\LoginErrorResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Submit Signup Information
     * @param \App\DTO\LoginSubmissionExample $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function submitSignupResult(
        \App\DTO\LoginSubmissionExample $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->submitSignup($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountApiKey
    /**
     * Generate New API Key
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountApiKeyRaw(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/apikey', [], []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Generate New API Key
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountApiKey(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountApiKeyRaw($security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Generate New API Key
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountApiKeyResult(
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAccountApiKey($security, $responseMediaType));
    }
    //endregion

    //region updateAccountCreditCard
    /**
     * Update Credit Card
     * @param \App\DTO\UpdateAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountCreditCardRaw(
        \App\DTO\UpdateAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/creditcards/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Credit Card
     * @param \App\DTO\UpdateAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountCreditCard(
        \App\DTO\UpdateAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountCreditCardRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Credit Card
     * @param \App\DTO\UpdateAccountCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountCreditCardResult(
        \App\DTO\UpdateAccountCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateAccountCreditCard($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateAccountFeatures
    /**
     * Update Account Feature Flags
     * @param \App\DTO\AccountFeatures $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountFeaturesRaw(
        \App\DTO\AccountFeatures $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/features', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Account Feature Flags
     * @param \App\DTO\AccountFeatures $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountFeatures(
        \App\DTO\AccountFeatures $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountFeaturesRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 422:
                /* Request was valid but did not contain updatable values. */
                $responseContent = new \App\DTO\TextResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Account Feature Flags
     * @param \App\DTO\AccountFeatures $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountFeaturesResult(
        \App\DTO\AccountFeatures $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAccountFeatures($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountInfo
    /**
     * Update Account Information
     * @param \App\DTO\AccountInfoPost $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountInfoRaw(
        \App\DTO\AccountInfoPost $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Account Information
     * @param \App\DTO\AccountInfoPost $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountInfo(
        \App\DTO\AccountInfoPost $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountInfoRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 422:
                /* Validation error while updating account data. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Account Information
     * @param \App\DTO\AccountInfoPost $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountInfoResult(
        \App\DTO\AccountInfoPost $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateAccountInfo($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountIpLimits
    /**
     * Add IP Access Restriction
     * @param \App\DTO\IpLimitRange $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountIpLimitsRaw(
        \App\DTO\IpLimitRange $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/iplimits', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Add IP Access Restriction
     * @param \App\DTO\IpLimitRange $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountIpLimits(
        \App\DTO\IpLimitRange $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountIpLimitsRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 422:
                /* IP limit payload contains an invalid address. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Add IP Access Restriction
     * @param \App\DTO\IpLimitRange $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountIpLimitsResult(
        \App\DTO\IpLimitRange $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateAccountIpLimits($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountPassword
    /**
     * Change Account Password
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountPasswordRaw(
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/password', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Change Account Password
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountPassword(
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountPasswordRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Change Account Password
     * @param \App\DTO\PasswordRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountPasswordResult(
        \App\DTO\PasswordRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAccountPassword($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountSshKey
    /**
     * Update SSH Keys
     * @param \App\DTO\AccountSshKey $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountSshKeyRaw(
        \App\DTO\AccountSshKey $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/sshkey', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update SSH Keys
     * @param \App\DTO\AccountSshKey $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountSshKey(
        \App\DTO\AccountSshKey $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountSshKeyRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update SSH Keys
     * @param \App\DTO\AccountSshKey $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountSshKeyResult(
        \App\DTO\AccountSshKey $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAccountSshKey($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAccountTfa
    /**
     * Enable Two-Factor Authentication
     * @param \App\DTO\UpdateAccountTfaRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAccountTfaRaw(
        \App\DTO\UpdateAccountTfaRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/account/2fa', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Enable Two-Factor Authentication
     * @param \App\DTO\UpdateAccountTfaRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAccountTfa(
        \App\DTO\UpdateAccountTfaRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAccountTfaRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            case 422:
                /* Provided two-factor verification code was invalid. */
                $responseContent = new \App\DTO\TextResponse();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Enable Two-Factor Authentication
     * @param \App\DTO\UpdateAccountTfaRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAccountTfaResult(
        \App\DTO\UpdateAccountTfaRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAccountTfa($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAffiliateDockSetup
    /**
     * Configure Affiliate Dock Settings
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAffiliateDockSetupRaw(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/affiliate/dock_setup', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Configure Affiliate Dock Settings
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAffiliateDockSetup(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAffiliateDockSetupRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Configure Affiliate Dock Settings
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAffiliateDockSetupResult(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAffiliateDockSetup($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAffiliateLandingPage
    /**
     * Configure Affiliate Landing Page
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAffiliateLandingPageRaw(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/affiliate/landing_pg', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Configure Affiliate Landing Page
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAffiliateLandingPage(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAffiliateLandingPageRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Configure Affiliate Landing Page
     * @param \App\DTO\AffiliateDockSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAffiliateLandingPageResult(
        \App\DTO\AffiliateDockSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAffiliateLandingPage($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateAffiliatePaymentSetup
    /**
     * Configure Affiliate Payout Preferences
     * @param \App\DTO\AffiliatePaymentSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateAffiliatePaymentSetupRaw(
        \App\DTO\AffiliatePaymentSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/affiliate/payment_setup', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Configure Affiliate Payout Preferences
     * @param \App\DTO\AffiliatePaymentSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateAffiliatePaymentSetup(
        \App\DTO\AffiliatePaymentSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateAffiliatePaymentSetupRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Configure Affiliate Payout Preferences
     * @param \App\DTO\AffiliatePaymentSetup $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateAffiliatePaymentSetupResult(
        \App\DTO\AffiliatePaymentSetup $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->updateAffiliatePaymentSetup($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateBackupInfo
    /**
     * Update Backup Information
     * @param \App\DTO\UpdateBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateBackupInfoRaw(
        \App\DTO\UpdateBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/backups/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Backup Information
     * @param \App\DTO\UpdateBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateBackupInfo(
        \App\DTO\UpdateBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateBackupInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Backup Information
     * @param \App\DTO\UpdateBackupInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateBackupInfoResult(
        \App\DTO\UpdateBackupInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateBackupInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateBillingCreditCard
    /**
     * Update Credit Card Details
     * @param \App\DTO\UpdateBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateBillingCreditCardRaw(
        \App\DTO\UpdateBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/billing/creditcards/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Credit Card Details
     * @param \App\DTO\UpdateBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateBillingCreditCard(
        \App\DTO\UpdateBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateBillingCreditCardRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Credit Card Details
     * @param \App\DTO\UpdateBillingCreditCardParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateBillingCreditCardResult(
        \App\DTO\UpdateBillingCreditCardParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateBillingCreditCard($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateBillingPaymentMethod
    /**
     * Update Default Payment Method
     * @param \App\DTO\BillingPaymentMethodRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateBillingPaymentMethodRaw(
        \App\DTO\BillingPaymentMethodRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/billing/payment_method', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Default Payment Method
     * @param \App\DTO\BillingPaymentMethodRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateBillingPaymentMethod(
        \App\DTO\BillingPaymentMethodRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateBillingPaymentMethodRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Default Payment Method
     * @param \App\DTO\BillingPaymentMethodRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateBillingPaymentMethodResult(
        \App\DTO\BillingPaymentMethodRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateBillingPaymentMethod($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateDnsRecord
    /**
     * Update DNS Record
     * @param \App\DTO\UpdateDnsRecordParameterData $parameters
     * @param \App\DTO\DnsUpdateRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateDnsRecordRaw(
        \App\DTO\UpdateDnsRecordParameterData $parameters,
        \App\DTO\DnsUpdateRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/dns/{domainId}/{recordId}', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update DNS Record
     * @param \App\DTO\UpdateDnsRecordParameterData $parameters
     * @param \App\DTO\DnsUpdateRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateDnsRecord(
        \App\DTO\UpdateDnsRecordParameterData $parameters,
        \App\DTO\DnsUpdateRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateDnsRecordRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update DNS Record
     * @param \App\DTO\UpdateDnsRecordParameterData $parameters
     * @param \App\DTO\DnsUpdateRecord $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateDnsRecordResult(
        \App\DTO\UpdateDnsRecordParameterData $parameters,
        \App\DTO\DnsUpdateRecord $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateDnsRecord($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateDomainContact
    /**
     * Update Domain Contact Details
     * @param \App\DTO\UpdateDomainContactParameterData $parameters
     * @param \App\DTO\DomainContactDetails $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateDomainContactRaw(
        \App\DTO\UpdateDomainContactParameterData $parameters,
        \App\DTO\DomainContactDetails $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/contact', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Domain Contact Details
     * @param \App\DTO\UpdateDomainContactParameterData $parameters
     * @param \App\DTO\DomainContactDetails $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateDomainContact(
        \App\DTO\UpdateDomainContactParameterData $parameters,
        \App\DTO\DomainContactDetails $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateDomainContactRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Domain Contact Details
     * @param \App\DTO\UpdateDomainContactParameterData $parameters
     * @param \App\DTO\DomainContactDetails $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateDomainContactResult(
        \App\DTO\UpdateDomainContactParameterData $parameters,
        \App\DTO\DomainContactDetails $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateDomainContact($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateDomainInfo
    /**
     * Update Domain Order
     * @param \App\DTO\UpdateDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateDomainInfoRaw(
        \App\DTO\UpdateDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Domain Order
     * @param \App\DTO\UpdateDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateDomainInfo(
        \App\DTO\UpdateDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateDomainInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Domain Order
     * @param \App\DTO\UpdateDomainInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateDomainInfoResult(
        \App\DTO\UpdateDomainInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateDomainInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateDomainNameservers
    /**
     * Replace Nameserver Set
     * @param \App\DTO\UpdateDomainNameserversParameterData $parameters
     * @param \App\DTO\DomainNameserverPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateDomainNameserversRaw(
        \App\DTO\UpdateDomainNameserversParameterData $parameters,
        \App\DTO\DomainNameserverPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/domains/{id}/nameservers', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Replace Nameserver Set
     * @param \App\DTO\UpdateDomainNameserversParameterData $parameters
     * @param \App\DTO\DomainNameserverPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateDomainNameservers(
        \App\DTO\UpdateDomainNameserversParameterData $parameters,
        \App\DTO\DomainNameserverPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateDomainNameserversRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response with a text message field. */
                $responseContent = new \App\DTO\TextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Replace Nameserver Set
     * @param \App\DTO\UpdateDomainNameserversParameterData $parameters
     * @param \App\DTO\DomainNameserverPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\TextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateDomainNameserversResult(
        \App\DTO\UpdateDomainNameserversParameterData $parameters,
        \App\DTO\DomainNameserverPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\TextResponse
    {
        return $this->getSuccessfulContent(...$this->updateDomainNameservers($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateDomainWhoisPrivacy
    /**
     * Update Whois Privacy
     * @param \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters
     * @param \App\DTO\DomainWhoisPrivacyRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateDomainWhoisPrivacyRaw(
        \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters,
        \App\DTO\DomainWhoisPrivacyRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/domains/{id}/whois', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Whois Privacy
     * @param \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters
     * @param \App\DTO\DomainWhoisPrivacyRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateDomainWhoisPrivacy(
        \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters,
        \App\DTO\DomainWhoisPrivacyRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateDomainWhoisPrivacyRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Whois Privacy
     * @param \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters
     * @param \App\DTO\DomainWhoisPrivacyRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateDomainWhoisPrivacyResult(
        \App\DTO\UpdateDomainWhoisPrivacyParameterData $parameters,
        \App\DTO\DomainWhoisPrivacyRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateDomainWhoisPrivacy($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateFloatingIpInfo
    /**
     * Update Floating IP
     * @param \App\DTO\UpdateFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateFloatingIpInfoRaw(
        \App\DTO\UpdateFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/floating_ips/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Floating IP
     * @param \App\DTO\UpdateFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateFloatingIpInfo(
        \App\DTO\UpdateFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateFloatingIpInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Floating IP
     * @param \App\DTO\UpdateFloatingIpInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateFloatingIpInfoResult(
        \App\DTO\UpdateFloatingIpInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateFloatingIpInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateLicenseInfo
    /**
     * Update License
     * @param \App\DTO\UpdateLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateLicenseInfoRaw(
        \App\DTO\UpdateLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/licenses/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update License
     * @param \App\DTO\UpdateLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateLicenseInfo(
        \App\DTO\UpdateLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateLicenseInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update License
     * @param \App\DTO\UpdateLicenseInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateLicenseInfoResult(
        \App\DTO\UpdateLicenseInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateLicenseInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateMailAlert
    /**
     * Update Mail Alert
     * @param \App\DTO\UpdateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertUpdateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateMailAlertRaw(
        \App\DTO\UpdateMailAlertParameterData $parameters,
        \App\DTO\MailAlertUpdateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/mail/{id}/alerts', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Mail Alert
     * @param \App\DTO\UpdateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertUpdateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateMailAlert(
        \App\DTO\UpdateMailAlertParameterData $parameters,
        \App\DTO\MailAlertUpdateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateMailAlertRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* A response indicating the operation completed successfully with a text message. */
                $responseContent = new \App\DTO\SuccessTextResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Mail Alert
     * @param \App\DTO\UpdateMailAlertParameterData $parameters
     * @param \App\DTO\MailAlertUpdateRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\SuccessTextResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateMailAlertResult(
        \App\DTO\UpdateMailAlertParameterData $parameters,
        \App\DTO\MailAlertUpdateRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\SuccessTextResponse
    {
        return $this->getSuccessfulContent(...$this->updateMailAlert($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateMailInfo
    /**
     * Update Mail Order
     * @param \App\DTO\UpdateMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateMailInfoRaw(
        \App\DTO\UpdateMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/mail/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Mail Order
     * @param \App\DTO\UpdateMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateMailInfo(
        \App\DTO\UpdateMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateMailInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Mail Order
     * @param \App\DTO\UpdateMailInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateMailInfoResult(
        \App\DTO\UpdateMailInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateMailInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateQsInfo
    /**
     * Update QuickServer Order
     * @param \App\DTO\UpdateQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateQsInfoRaw(
        \App\DTO\UpdateQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/qs/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update QuickServer Order
     * @param \App\DTO\UpdateQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateQsInfo(
        \App\DTO\UpdateQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateQsInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update QuickServer Order
     * @param \App\DTO\UpdateQsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateQsInfoResult(
        \App\DTO\UpdateQsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateQsInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateServerInfo
    /**
     * Update Server Order
     * @param \App\DTO\UpdateServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateServerInfoRaw(
        \App\DTO\UpdateServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/servers/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Server Order
     * @param \App\DTO\UpdateServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateServerInfo(
        \App\DTO\UpdateServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateServerInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Server Order
     * @param \App\DTO\UpdateServerInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateServerInfoResult(
        \App\DTO\UpdateServerInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateServerInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateSslInfo
    /**
     * Update SSL Cert Order
     * @param \App\DTO\UpdateSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateSslInfoRaw(
        \App\DTO\UpdateSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/ssl/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update SSL Cert Order
     * @param \App\DTO\UpdateSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateSslInfo(
        \App\DTO\UpdateSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateSslInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update SSL Cert Order
     * @param \App\DTO\UpdateSslInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateSslInfoResult(
        \App\DTO\UpdateSslInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateSslInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateTicketInfo
    /**
     * Update Ticket
     * @param \App\DTO\UpdateTicketInfoParameterData $parameters
     * @param \App\DTO\UpdateTicket $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateTicketInfoRaw(
        \App\DTO\UpdateTicketInfoParameterData $parameters,
        \App\DTO\UpdateTicket $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/tickets/{id}/update', $this->getPathParameters($parameters), []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Ticket
     * @param \App\DTO\UpdateTicketInfoParameterData $parameters
     * @param \App\DTO\UpdateTicket $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateTicketInfo(
        \App\DTO\UpdateTicketInfoParameterData $parameters,
        \App\DTO\UpdateTicket $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateTicketInfoRaw($parameters, $requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Response from updating a support ticket. */
                $responseContent = new \App\DTO\UpdateTicketResponseSchema();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Ticket
     * @param \App\DTO\UpdateTicketInfoParameterData $parameters
     * @param \App\DTO\UpdateTicket $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\UpdateTicketResponseSchema
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateTicketInfoResult(
        \App\DTO\UpdateTicketInfoParameterData $parameters,
        \App\DTO\UpdateTicket $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'application/json',
        string $responseMediaType = 'application/json'
    ): \App\DTO\UpdateTicketResponseSchema
    {
        return $this->getSuccessfulContent(...$this->updateTicketInfo($parameters, $requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region updateVpsInfo
    /**
     * Update VPS Order
     * @param \App\DTO\UpdateVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateVpsInfoRaw(
        \App\DTO\UpdateVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/vps/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update VPS Order
     * @param \App\DTO\UpdateVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateVpsInfo(
        \App\DTO\UpdateVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateVpsInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update VPS Order
     * @param \App\DTO\UpdateVpsInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateVpsInfoResult(
        \App\DTO\UpdateVpsInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateVpsInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region updateWebsiteInfo
    /**
     * Update Website Order
     * @param \App\DTO\UpdateWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function updateWebsiteInfoRaw(
        \App\DTO\UpdateWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('POST', '/websites/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Update Website Order
     * @param \App\DTO\UpdateWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function updateWebsiteInfo(
        \App\DTO\UpdateWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->updateWebsiteInfoRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
            default:
                /* Default response */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Update Website Order
     * @param \App\DTO\UpdateWebsiteInfoParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return mixed
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function updateWebsiteInfoResult(
        \App\DTO\UpdateWebsiteInfoParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): mixed
    {
        return $this->getSuccessfulContent(...$this->updateWebsiteInfo($parameters, $security, $responseMediaType));
    }
    //endregion

    //region vPSCancel
    /**
     * Cancel VPS Service
     * @param \App\DTO\VPSCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function vPSCancelRaw(
        \App\DTO\VPSCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/vps/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel VPS Service
     * @param \App\DTO\VPSCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function vPSCancel(
        \App\DTO\VPSCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->vPSCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* VPS Cancel */
                $responseContent = new \App\DTO\VPSCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel VPS Service
     * @param \App\DTO\VPSCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\VPSCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function vPSCancelResult(
        \App\DTO\VPSCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\VPSCancel200Response
    {
        return $this->getSuccessfulContent(...$this->vPSCancel($parameters, $security, $responseMediaType));
    }
    //endregion

    //region validateBackupOrder
    /**
     * Validate Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function validateBackupOrderRaw(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('PUT', '/backups/order', [], []);
        $request = $this->addBody($request, $requestMediaType, $requestContent);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Validate Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function validateBackupOrder(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->validateBackupOrderRaw($requestContent, $security, $requestMediaType, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Validate Backup Order Response */
                $responseContent = new \App\DTO\BackupOrderPutResponse();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Validate Backup Order
     * @param \App\DTO\BackupOrderPutRequest $requestContent
     * @param iterable<string, string[]> $security
     * @param string $requestMediaType
     * @param string $responseMediaType
     * @return \App\DTO\BackupOrderPutResponse
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function validateBackupOrderResult(
        \App\DTO\BackupOrderPutRequest $requestContent,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $requestMediaType = 'multipart/form-data',
        string $responseMediaType = 'application/json'
    ): \App\DTO\BackupOrderPutResponse
    {
        return $this->getSuccessfulContent(...$this->validateBackupOrder($requestContent, $security, $requestMediaType, $responseMediaType));
    }
    //endregion

    //region viewMailLog
    /**
     * View Mail Log
     * @param \App\DTO\ViewMailLogParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function viewMailLogRaw(
        \App\DTO\ViewMailLogParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('GET', '/mail/{id}/log', $this->getPathParameters($parameters), $this->getQueryParameters($parameters));
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * View Mail Log
     * @param \App\DTO\ViewMailLogParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function viewMailLog(
        \App\DTO\ViewMailLogParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->viewMailLogRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Paginated list of mail log entries matching the specified filters. */
                $responseContent = new \App\DTO\MailLog();
                break;
            case 400:
                /* bad input parameter */
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * View Mail Log
     * @param \App\DTO\ViewMailLogParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\MailLog
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function viewMailLogResult(
        \App\DTO\ViewMailLogParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\MailLog
    {
        return $this->getSuccessfulContent(...$this->viewMailLog($parameters, $security, $responseMediaType));
    }
    //endregion

    //region webhostingCancel
    /**
     * Cancel Website
     * @param \App\DTO\WebhostingCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return ResponseInterface
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     */
    public function webhostingCancelRaw(
        \App\DTO\WebhostingCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): ResponseInterface
    {
        $request = $this->createRequest('DELETE', '/websites/{id}', $this->getPathParameters($parameters), []);
        $request = $this->addAcceptHeader($request, $responseMediaType);
        $request = $this->addSecurity($request, $security);
        return $this->httpClient->sendRequest($request);
    }

    /**
     * Cancel Website
     * @param \App\DTO\WebhostingCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return array
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     */
    public function webhostingCancel(
        \App\DTO\WebhostingCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): array
    {
        $response = $this->webhostingCancelRaw($parameters, $security, $responseMediaType);
        $responseContent = null;
        $contentStrategy = null;
        $contentValidator = null;
        switch ($response->getStatusCode())
        {
            case 200:
                /* Website cancel */
                $responseContent = new \App\DTO\WebhostingCancel200Response();
                break;
            case 401:
                /* Unauthorized */
                $responseContent = new \App\DTO\GetAccountInfo401Response();
                break;
        }
        $this->parseBody($response, $responseContent, $contentStrategy, $contentValidator);
        return [$responseContent, $response->getHeaders(), $response->getStatusCode(), $response->getReasonPhrase()];
    }

    /**
     * Cancel Website
     * @param \App\DTO\WebhostingCancelParameterData $parameters
     * @param iterable<string, string[]> $security
     * @param string $responseMediaType
     * @return \App\DTO\WebhostingCancel200Response
     * @throws ClientExceptionInterface
     * @throws DT\Exception\InvalidData
     * @throws OAGAC\Exception\InvalidResponseBodySchema
     * @throws OAGAC\Exception\UnsuccessfulResponse
     */
    public function webhostingCancelResult(
        \App\DTO\WebhostingCancelParameterData $parameters,
        iterable $security = ['sessionIdCookieAuth' => []],
        string $responseMediaType = 'application/json'
    ): \App\DTO\WebhostingCancel200Response
    {
        return $this->getSuccessfulContent(...$this->webhostingCancel($parameters, $security, $responseMediaType));
    }
    //endregion
}

