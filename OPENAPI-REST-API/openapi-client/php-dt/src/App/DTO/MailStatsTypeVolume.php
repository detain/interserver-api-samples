<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailStatsTypeVolume
{
    #[DTA\Data(field: "to", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailStatsTypeVolumeTo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailStatsTypeVolumeTo::class])]
    public \App\DTO\MailStatsTypeVolumeTo|null $to = null;

    #[DTA\Data(field: "from", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailStatsTypeVolumeFrom::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailStatsTypeVolumeFrom::class])]
    public \App\DTO\MailStatsTypeVolumeFrom|null $from = null;

    #[DTA\Data(field: "ip", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailStatsTypeVolumeIp::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailStatsTypeVolumeIp::class])]
    public \App\DTO\MailStatsTypeVolumeIp|null $ip = null;

}
