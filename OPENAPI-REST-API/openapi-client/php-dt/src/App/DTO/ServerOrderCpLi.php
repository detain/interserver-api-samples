<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Control Panel options for the server order.
 */
class ServerOrderCpLi
{
    #[DTA\Data(field: "9", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderControlPanel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderControlPanel::class])]
    public \App\DTO\ServerOrderControlPanel|null $_9 = null;

}
