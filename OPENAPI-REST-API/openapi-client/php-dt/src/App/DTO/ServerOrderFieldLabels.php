<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Field labels for the server order.
 */
class ServerOrderFieldLabels
{
    /**
     * Bandwidth field label.
     */
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $bandwidth = null;

    /**
     * IPs field label.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $ips = null;

    /**
     * Operating System field label.
     */
    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $os = null;

    /**
     * Control Panel field label.
     */
    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $cp = null;

    /**
     * RAID field label.
     */
    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $raid = null;

    /**
     * Memory field label.
     */
    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $memory = null;

    /**
     * Hard Drives field label
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabel::class])]
    public \App\DTO\ServerOrderFieldLabel|null $hd = null;

}
