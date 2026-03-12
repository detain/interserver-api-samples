(ns inter-server-management-api.specs.mail-extra-info-table-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-extra-info-table-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def mail-extra-info-table-row-spec
  (ds/spec
    {:name ::mail-extra-info-table-row
     :spec mail-extra-info-table-row-data}))
