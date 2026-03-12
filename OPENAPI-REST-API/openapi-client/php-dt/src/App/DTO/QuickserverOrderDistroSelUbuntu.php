<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverOrderDistroSelUbuntu
{
    /**
     * Selected distribution for Ubuntu.
     */
    #[DTA\Data(field: "Ubuntu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ubuntu = null;

}
