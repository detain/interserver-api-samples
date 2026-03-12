(ns inter-server-management-api.specs.mail-stats-type-volume-to
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-stats-type-volume-to-data
  {
   (ds/opt :clientdomaincom) int?
   (ds/opt :usersitenet) int?
   (ds/opt :salescompanycom) int?
   (ds/opt :clientanothersitecom) int?
   })

(def mail-stats-type-volume-to-spec
  (ds/spec
    {:name ::mail-stats-type-volume-to
     :spec mail-stats-type-volume-to-data}))
