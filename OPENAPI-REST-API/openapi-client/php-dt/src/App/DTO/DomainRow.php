<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 */
class DomainRow
{
    /**
     * The ID number of the domain in our billing system.
     */
    #[DTA\Data(field: "domain_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_id = null;

    /**
     * The hostname of the domain.
     */
    #[DTA\Data(field: "domain_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_hostname = null;

    /**
     * The expiration date of the domain.
     */
    #[DTA\Data(field: "domain_expire_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_expire_date = null;

    /**
     * The cost of the domain.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cost = null;

    /**
     * The billing / registration status of the domain.
     */
    #[DTA\Data(field: "domain_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_status = null;

}
