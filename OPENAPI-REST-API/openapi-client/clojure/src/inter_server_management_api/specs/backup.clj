(ns inter-server-management-api.specs.backup
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backup-service-info :refer :all]
            [inter-server-management-api.specs.backup-client-link :refer :all]
            [inter-server-management-api.specs.backup-billing-details :refer :all]
            [inter-server-management-api.specs.backup-service-master :refer :all]
            [inter-server-management-api.specs.backup-extra-info-tables :refer :all]
            )
  (:import (java.io File)))


(def backup-data
  {
   (ds/opt :serviceInfo) backup-service-info-spec
   (ds/opt :client_links) (s/coll-of backup-client-link-spec)
   (ds/opt :billingDetails) backup-billing-details-spec
   (ds/opt :custCurrency) string?
   (ds/opt :custCurrencySymbol) string?
   (ds/opt :serviceMaster) backup-service-master-spec
   (ds/opt :package) string?
   (ds/opt :serviceExtra) string?
   (ds/opt :extraInfoTables) backup-extra-info-tables-spec
   })

(def backup-spec
  (ds/spec
    {:name ::backup
     :spec backup-data}))
