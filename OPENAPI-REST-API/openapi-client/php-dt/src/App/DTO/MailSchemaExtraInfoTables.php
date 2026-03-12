<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Additional information tables for the mail service.
 */
class MailSchemaExtraInfoTables
{
    #[DTA\Data(field: "mail", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailExtraInfoTable::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailExtraInfoTable::class])]
    public \App\DTO\MailExtraInfoTable|null $mail = null;

    #[DTA\Data(field: "tutorials", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailTutorialsTable::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailTutorialsTable::class])]
    public \App\DTO\MailTutorialsTable|null $tutorials = null;

}
