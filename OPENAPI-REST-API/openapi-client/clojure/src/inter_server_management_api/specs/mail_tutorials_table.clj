(ns inter-server-management-api.specs.mail-tutorials-table
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-tutorials-table-row :refer :all]
            )
  (:import (java.io File)))


(def mail-tutorials-table-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of mail-tutorials-table-row-spec)
   })

(def mail-tutorials-table-spec
  (ds/spec
    {:name ::mail-tutorials-table
     :spec mail-tutorials-table-data}))
