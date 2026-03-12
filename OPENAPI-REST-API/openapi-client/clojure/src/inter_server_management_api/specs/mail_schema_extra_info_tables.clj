(ns inter-server-management-api.specs.mail-schema-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-extra-info-table :refer :all]
            [inter-server-management-api.specs.mail-tutorials-table :refer :all]
            )
  (:import (java.io File)))


(def mail-schema-extra-info-tables-data
  {
   (ds/opt :mail) mail-extra-info-table-spec
   (ds/opt :tutorials) mail-tutorials-table-spec
   })

(def mail-schema-extra-info-tables-spec
  (ds/spec
    {:name ::mail-schema-extra-info-tables
     :spec mail-schema-extra-info-tables-data}))
