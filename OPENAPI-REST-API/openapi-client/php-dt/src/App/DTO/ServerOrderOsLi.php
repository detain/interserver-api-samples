<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Operating System options for the server order.
 */
class ServerOrderOsLi
{
    #[DTA\Data(field: "51", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderOS::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderOS::class])]
    public \App\DTO\ServerOrderOS|null $_51 = null;

}
