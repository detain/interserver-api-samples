<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for verifying a credit card through the verification flow.
 */
class BillingVerifyCcRequest
{
    /**
     * Card index to verify.
     */
    #[DTA\Data(field: "idx", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $idx = null;

    /**
     * CVV code for verification.
     */
    #[DTA\Data(field: "cc_ccv2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_ccv2 = null;

    /**
     * First micro-charge amount for verification.
     */
    #[DTA\Data(field: "cc_amount1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_amount1 = null;

    /**
     * Second micro-charge amount for verification.
     */
    #[DTA\Data(field: "cc_amount2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_amount2 = null;

    /**
     * Whether terms were accepted for verification.
     */
    #[DTA\Data(field: "terms", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $terms = null;

}
