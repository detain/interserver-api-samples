(ns inter-server-management-api.specs.mail-stats-type-volume-from
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-stats-type-volume-from-data
  {
   (ds/opt :billingsomedomaincom) int?
   (ds/opt :salessomedomaincom) int?
   })

(def mail-stats-type-volume-from-spec
  (ds/spec
    {:name ::mail-stats-type-volume-from
     :spec mail-stats-type-volume-from-data}))
