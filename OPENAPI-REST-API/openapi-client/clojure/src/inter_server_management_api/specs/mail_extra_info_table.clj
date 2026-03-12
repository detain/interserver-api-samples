(ns inter-server-management-api.specs.mail-extra-info-table
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-extra-info-table-row :refer :all]
            )
  (:import (java.io File)))


(def mail-extra-info-table-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of mail-extra-info-table-row-spec)
   })

(def mail-extra-info-table-spec
  (ds/spec
    {:name ::mail-extra-info-table
     :spec mail-extra-info-table-data}))
