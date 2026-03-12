<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerOrderMemoryLi254
{
    #[DTA\Data(field: "65", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderMemory::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderMemory::class])]
    public \App\DTO\ServerOrderMemory|null $_65 = null;

}
