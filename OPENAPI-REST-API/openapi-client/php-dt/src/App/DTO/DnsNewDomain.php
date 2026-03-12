<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The request for a new domain to be managed by the dns servers.
 */
class DnsNewDomain
{
    /**
     * The domain name.
     */
    #[DTA\Data(field: "domain")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain = null;

    /**
     * IP Address to point the domain to.
     */
    #[DTA\Data(field: "ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

}
