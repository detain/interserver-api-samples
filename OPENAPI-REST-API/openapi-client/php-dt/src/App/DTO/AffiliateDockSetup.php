<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Affiliate Landing Page information.
 */
class AffiliateDockSetup
{
    #[DTA\Data(field: "affiliate_dock_title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_dock_title = null;

    #[DTA\Data(field: "affiliate_dock_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_dock_description = null;

    #[DTA\Data(field: "referrer_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $referrer_coupon = null;

}
