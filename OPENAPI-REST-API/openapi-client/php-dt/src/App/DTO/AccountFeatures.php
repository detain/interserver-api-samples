<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Account Features data.
 */
class AccountFeatures
{
    #[DTA\Data(field: "disable_reset", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $disable_reset = null;

    #[DTA\Data(field: "disable_reinstall", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $disable_reinstall = null;

}
