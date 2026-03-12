(ns inter-server-management-api.specs.mail-tutorials-table-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-tutorials-table-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def mail-tutorials-table-row-spec
  (ds/spec
    {:name ::mail-tutorials-table-row
     :spec mail-tutorials-table-row-data}))
