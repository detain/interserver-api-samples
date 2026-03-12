<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailStatsTypeVolumeIp
{
    #[DTA\Data(field: "1.1.1.1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_1_1_1_1 = null;

    #[DTA\Data(field: "2.2.2.2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_2_2_2_2 = null;

    #[DTA\Data(field: "3.3.3.3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_3_3_3_3 = null;

    #[DTA\Data(field: "4.4.4.4", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_4_4_4_4 = null;

}
