<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * CPU options for the server order.
 */
class ServerOrderCpuLi
{
    #[DTA\Data(field: "254", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderCPU::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderCPU::class])]
    public \App\DTO\ServerOrderCPU|null $_254 = null;

}
