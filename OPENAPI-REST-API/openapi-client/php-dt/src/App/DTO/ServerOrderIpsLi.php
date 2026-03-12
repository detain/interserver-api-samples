<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IP options for the server order.
 */
class ServerOrderIpsLi
{
    #[DTA\Data(field: "9", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderIP::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderIP::class])]
    public \App\DTO\ServerOrderIP|null $_9 = null;

}
