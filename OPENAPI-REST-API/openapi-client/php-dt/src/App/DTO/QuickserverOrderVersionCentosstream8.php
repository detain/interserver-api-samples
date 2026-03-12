<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverOrderVersionCentosstream8
{
    /**
     * Version details of CentOS Stream 8.
     */
    #[DTA\Data(field: "centosstream-8", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $centosstream_8 = null;

}
