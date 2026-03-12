(ns inter-server-management-api.specs.post-website-migration-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-website-migration-request-data
  {
   (ds/opt :custPortal) string?
   (ds/opt :regEmail) string?
   (ds/opt :password) string?
   (ds/opt :ctrlPanel) string?
   (ds/opt :ftpUsername) string?
   (ds/opt :ftpPassword) string?
   (ds/opt :siteBusyMig) string?
   (ds/opt :splReqMig) string?
   (ds/opt :domainReg) string?
   (ds/opt :dataMig) string?
   (ds/opt :domainRegPortal) string?
   (ds/opt :domainRegEmail) string?
   (ds/opt :domainRegPassword) string?
   })

(def post-website-migration-request-spec
  (ds/spec
    {:name ::post-website-migration-request
     :spec post-website-migration-request-data}))
