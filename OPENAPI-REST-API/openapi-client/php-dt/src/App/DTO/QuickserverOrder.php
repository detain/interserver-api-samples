<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 */
class QuickserverOrder
{
    /**
     * Quickserver ID.
     */
    #[DTA\Data(field: "qs_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_id = null;

    #[DTA\Data(field: "server_details", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderServerDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderServerDetails::class])]
    public \App\DTO\QuickserverOrderServerDetails|null $server_details = null;

    #[DTA\Data(field: "templates", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderTemplates::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderTemplates::class])]
    public \App\DTO\QuickserverOrderTemplates|null $templates = null;

    #[DTA\Data(field: "version", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderVersion::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderVersion::class])]
    public \App\DTO\QuickserverOrderVersion|null $version = null;

    #[DTA\Data(field: "distro_sel", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderDistroSel::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderDistroSel::class])]
    public \App\DTO\QuickserverOrderDistroSel|null $distro_sel = null;

}
