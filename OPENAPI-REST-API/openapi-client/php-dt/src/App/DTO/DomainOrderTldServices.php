<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Example map of TLDs to service IDs for domain ordering.
 */
class DomainOrderTldServices
{
    /**
     * Service ID for .asia TLD
     */
    #[DTA\Data(field: ".asia", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_asia = null;

    /**
     * Service ID for .be TLD
     */
    #[DTA\Data(field: ".be", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_be = null;

    /**
     * Service ID for .biz TLD
     */
    #[DTA\Data(field: ".biz", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_biz = null;

    /**
     * Service ID for .ca TLD
     */
    #[DTA\Data(field: ".ca", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_ca = null;

}
