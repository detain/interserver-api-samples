<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class AccountInfoDataEmailSettings
{
    #[DTA\Data(field: "admin/cc_bad_response", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $admin_cc_bad_response = null;

    #[DTA\Data(field: "admin/mass_communications.tpl", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $admin_mass_communications_tpl = null;

}
