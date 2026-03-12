<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Memory options for the server order.
 */
class ServerOrderMemoryLi
{
    #[DTA\Data(field: "254", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderMemoryLi254::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderMemoryLi254::class])]
    public \App\DTO\ServerOrderMemoryLi254|null $_254 = null;

}
