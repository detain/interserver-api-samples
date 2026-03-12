<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailStatsTypeVolumeTo
{
    #[DTA\Data(field: "client@domain.com", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $clientdomain_com = null;

    #[DTA\Data(field: "user@site.net", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $usersite_net = null;

    #[DTA\Data(field: "sales@company.com", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $salescompany_com = null;

    #[DTA\Data(field: "client@anothersite.com", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $clientanothersite_com = null;

}
