<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailStatsTypeVolumeFrom
{
    #[DTA\Data(field: "billing@somedomain.com", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $billingsomedomain_com = null;

    #[DTA\Data(field: "sales@somedomain.com", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $salessomedomain_com = null;

}
