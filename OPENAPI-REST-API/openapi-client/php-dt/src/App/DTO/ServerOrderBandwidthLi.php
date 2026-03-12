<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Bandwidth options for the server order.
 */
class ServerOrderBandwidthLi
{
    #[DTA\Data(field: "15", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderBandwidth::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderBandwidth::class])]
    public \App\DTO\ServerOrderBandwidth|null $_15 = null;

}
