<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BackupsOrderPackageCosts
{
    /**
     * The cost associated with package 11006.
     */
    #[DTA\Data(field: "11006")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_11006 = null;

}
